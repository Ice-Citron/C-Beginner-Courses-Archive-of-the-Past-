#include "../include/data_handler.hpp"
#include <iostream>

data_handler::data_handler(){ //constructor
    data_array = new std::vector<data *>;
    test_data = new std::vector<data *>;
    training_data = new std::vector<data *>;
    validation_data = new std::vector<data *>;
}
data_handler::~data_handler(){ //destructor
    // FREE Dynamically Allocated STUFF
}

void data_handler::read_csv(std::string path, std::string delimiter){
    num_classes = 0;
    std::ifstream data_file(path.c_str());
    std::string line;
    while(std::getline(data_file, line)){
        if(line.length() == 0) continue;
    data *d = new data();
    d->set_double_feature_vector(new std::vector<double>());
    size_t position = 0;
    std::string token;
    while((position = line.find(delimiter)) != std::string::npos)
    {
      token = line.substr(0, position);
      d->append_to_feature_vector(std::stod(token));
      line.erase(0, position + delimiter.length());
    }

    if(classMap.find(line) != classMap.end())
    {
      d->set_label(classMap[line]);
    } else 
    {
      classMap[line] = num_classes;
      d->set_label(classMap[token]);
      num_classes++;
    }
    data_array->push_back(d);
  }
  for(data *data : *data_array)
    data->set_class_vector(num_classes);;
  //normalize();
  feature_vector_size = data_array->at(0)->get_double_feature_vector()->size();
}

void data_handler::read_feature_vector(std::string path){
    uint32_t header[4]; // |MAGIC|NUM IMAGES|ROWSIZE|COLSIZE
    unsigned char bytes[4];
    FILE *f = fopen(path.c_str(), "r");
    if(f){
        for(int i = 0; i < 4; i++){
            if(fread(bytes, sizeof(bytes), 1, f)){
                header[i] = convert_to_little_endian(bytes);
            }
        }
        printf("Done getting input file header.\n");
        int image_size = header[2]*header[3];
        for(int i = 0; i < header[1]; i++){
            data *d = new data();
            uint8_t element[1];
            for(int j = 0; j < image_size; j++){
                if(fread(element, sizeof(element), 1, f)){
                    d->append_to_feature_vector(element[0]);
                }
                else{
                    printf("Error Reading from File.\n"); 
                    exit(1);
                }
            }
            data_array->push_back(d);
        }
        printf("Successfully read and stored %lu feature vectors.\n", data_array->size());
    }
    else{
        printf("Could not find file.\n");
        exit(1);
    }
} 

void data_handler::read_feature_labels(std::string path){
    uint32_t header[2]; // |MAGIC|NUM IMAGES
    unsigned char bytes[4];
    FILE *f = fopen(path.c_str(), "r");
    if(f){
        for(int i = 0; i < 2; i++){
            if(fread(bytes, sizeof(bytes), 1, f)){
                header[i] = convert_to_little_endian(bytes);
            }
        }
        printf("Done getting label file header.\n");
        for(int i = 0; i < header[1]; i++){
            uint8_t element[1];
            if(fread(element, sizeof(element), 1, f)){
                data_array->at(i)->set_label(element[0]);
            }
            else{
                printf("Error Reading from File.\n");
                exit(1);
            }
        }
        printf("Successfully read and stored label.\n");
    }
    else{
        printf("Could not find file.\n");
        exit(1);
    }
}

void data_handler::split_data(){
    std::unordered_set<int> used_indexes;
    int train_size = data_array->size() * TRAIN_SET_PERCENT;
    int test_size = data_array->size() * TEST_SET_PERCENT;
    int valid_size = data_array->size() * VALIDATION_PERCENT;

    //Training data

    int count = 0;
    while (count < train_size){
        int rand_index = rand() % data_array->size();  // 0 & data_array->size() - 1
        if (used_indexes.find(rand_index) == used_indexes.end()){
            training_data->push_back(data_array->at(rand_index));
            used_indexes.insert(rand_index);
            count++;
        }
    }
    //Test data

    count = 0;
    while (count < test_size){
        int rand_index = rand() % data_array->size();  // 0 & data_array->size() - 1
        if (used_indexes.find(rand_index) == used_indexes.end()){
            test_data->push_back(data_array->at(rand_index));
            used_indexes.insert(rand_index);
            count++;
        }
    }

    //Validation data

    count = 0;
    while (count < valid_size){
        int rand_index = rand() % data_array->size();  // 0 & data_array->size() - 1
        if (used_indexes.find(rand_index) == used_indexes.end()){
            validation_data->push_back(data_array->at(rand_index));
            used_indexes.insert(rand_index);
            count++;
        }
    }
    printf("Training Data Size: %lu.\n", training_data->size());
    printf("Test Data Size: %lu.\n", test_data->size());
    printf("Validation Data Size: %lu.\n", validation_data->size());
}

void data_handler::count_classes(){
    int count = 0;
    for (unsigned i = 0; i < data_array->size(); i++){
        if (class_map.find(data_array->at(i)->get_label()) == class_map.end()){
            class_map[data_array->at(i)->get_label()] = count;
            data_array->at(i)->set_enumerated_label(count);
            count++;
        }
    }
    num_classes = count;
    for(data *data: *data_array){
        data->set_class_vector(num_classes);
    }
    printf("Successfully Extracted %d Uniquie Classes.\n", num_classes);
}

uint32_t data_handler::convert_to_little_endian(const unsigned char* bytes){
    return (uint32_t) ((bytes[0] << 24) | (bytes[1] << 16) | (bytes[2] <<  8) | (bytes[3]));
}

void data_handler::normalize(){
    std::vector<double> mins, max;
    // fill min and max

    data *d = data_array->at(0);
    for(auto val : *d->get_feature_vector()){
        mins.push_back(val);
        max.push_back(val);
    }

    for(int i = 0; i < data_array->size(); i++){
        d = data_array->at(i);
        for(int j = 0; j < d->get_feature_vector_size(); j++){
            double value = (double) d->get_feature_vector()->at(j);
            if(value < mins.at(j)){
                mins[j] = value;
            }
            if(value > max.at(j)){
                max[j] = value;
            }
        }
    }
    //normalize data array

    for(int i = 0; i < data_array->size(); i++){
        data_array->at(i)->set_double_feature_vector(new std::vector<double>());
        data_array->at(i)->set_class_vector(num_classes);
        for(int j = 0; j < data_array->at(i)->get_feature_vector_size(); j++){
            if(max[j] - mins[j] == 0){
                data_array->at(i)->append_to_feature_vector(0.0);
            }
            else{
                data_array->at(i)->append_to_feature_vector(
                    (double(data_array->at(i)->get_feature_vector()->at(j) - mins[j])/(max[j]-mins[j])));
            }
        }

    }
}

int data_handler::get_class_counts(){
    return num_classes;
}

std::vector<data *> * data_handler::get_training_data(){
    return training_data;
}

std::vector<data *> * data_handler::get_test_data(){
    return test_data;
}

std::vector<data *> * data_handler::get_validation_data(){
    return validation_data;
}

int data_handler::get_feature_vector_size(){
    return feature_vector_size;
}
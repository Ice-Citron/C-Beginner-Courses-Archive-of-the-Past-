#include "../include/data.hpp"

data::data(){
    feature_vector = new std::vector<uint8_t>;
}

data::~data(){

}

void data::set_feature_vector(std::vector<uint8_t> *vect){
    feature_vector = vect;
}

void data::set_double_feature_vector(std::vector<double> *vect){
    double_feature_vector = vect;
}

void data::append_to_feature_vector(uint8_t val){
    feature_vector -> push_back(val);
}

void data::append_to_feature_vector(double val){
    double_feature_vector -> push_back(val);
}

void data::set_label(uint8_t val){
    label = val;
}

void data::set_enumerated_label(int val){
    enum_label = val;
}

void data::set_distance(double val){
    distance = val;
}

void data::set_class_vector(int count){
    class_vector = new std::vector<int>();
    for(int i = 0; i < count; i++){
        if(i == label){
            class_vector->push_back(1);
        }
        else{ 
            class_vector->push_back(0);
        }
    }
}

int data::get_feature_vector_size(){
    return feature_vector -> size();
}

uint8_t data::get_label(){
    return label;
}

uint8_t data::get_enumerated_label(){
    return enum_label;
}

std::vector<uint8_t> * data::get_feature_vector(){
    return feature_vector;
}

std::vector<double> * data::get_double_feature_vector(){
    return double_feature_vector;
}

std::vector<int> data::get_class_vector(){
    return *class_vector;
}

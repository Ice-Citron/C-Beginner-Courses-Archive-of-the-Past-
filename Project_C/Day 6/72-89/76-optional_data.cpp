#include <iostream>
#include <fstream>
#include <string>
#include <optional>

using namespace std;

std::optional<std::string> readFileAsString(const std::string& filepath){
    std::ifstream stream(filepath);
    if (stream){
        //read file
        std::string result;
        stream.close();
        return result;
    }
    return {};
}

int main(){

    std::optional<std::string> data = readFileAsString("data.txt");
    if (data.has_value())
    {
        cout << "File read successfuly!" << endl;
    }
    else{
        cout << "File could not be opened." << endl;
    }


    cin.get();
}

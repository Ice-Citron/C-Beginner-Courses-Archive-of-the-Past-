#include <iostream>
#include <any>
#include <variant>
//#include <string>

using namespace std;

int main(){

    std::any data;
    data = 2;
    data = "cherno";
    data = std::string("cherno");

    std::string& std::any_cast<std::string&>(data);


    cin.get();
}



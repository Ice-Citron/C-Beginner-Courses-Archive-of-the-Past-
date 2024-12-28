#include <iostream>

void printinfo(const std::string &name, const int &age);

int main(){

    std::string name = "Panithraa";
    int age = 15;

    printinfo(name, age);

    return 0;
}

//const in function param will conjure an error if code attempts to reassign said variable
void printinfo(const std::string &name, const int &age){
    //example below will cause an error
    //name = ""
    std::cout << name << "\n";
    std::cout << age << "\n";
}


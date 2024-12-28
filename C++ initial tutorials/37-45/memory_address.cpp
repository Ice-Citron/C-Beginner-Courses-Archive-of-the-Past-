#include <iostream>

int main(){

    //memory address = a location in memory where data is stored
    //a memory can be access with & operators

    std::string name = "Panithraa Prasanna";
    int age = 16;
    bool student = true;

    std::cout << &name << "\n";
    std::cout << &age << "\n";
    std::cout << &student << "\n";

    return 0;
}


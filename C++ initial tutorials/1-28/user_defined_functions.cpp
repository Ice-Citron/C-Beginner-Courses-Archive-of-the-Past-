#include <iostream>

void HappyBirthday(std::string name);

int main(){

    std::string user = "Panny";

    HappyBirthday(user);

    return 0;
}

void HappyBirthday(std::string name){
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to you!\n";
    std::cout << "Happy birthday to " << name << "!\n";
}

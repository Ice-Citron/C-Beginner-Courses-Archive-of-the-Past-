#include <iostream>

class student{
    public:
        std::string name;
        int age;
        double gpa;
    //the constructor
    student(std::string n, int a, double g){
        name = n;
        age = a;
        this->gpa = g;  //use this-> if parameter have same name as class variable 
    }
}; 
 
int main(){

    student student1("Spongebob", 25, 3.2);

    std::cout << student1.name << "\n";
    std::cout << student1.age << "\n";
    std::cout << student1.gpa << "\n";
 
    return 0;
}


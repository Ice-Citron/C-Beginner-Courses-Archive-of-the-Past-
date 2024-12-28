#include <iostream>
#include <string>
using namespace std;


class Entity{
private:
    string m_Name;
    int m_Age;
public:
    Entity(const string& name) 
        : m_Name(name), m_Age(-1){

    }
    Entity(int age) 
        : m_Name("Unknown"), m_Age(age){

    }



};


void PrintEntity(const Entity& entity){
    //
}


int main(){

    PrintEntity(22);
    PrintEntity(string("Cherno"));

    Entity a("Cherno");
    Entity b(22);


    cin.get();
    return 0;
}
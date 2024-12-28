#include <iostream>
#include <string>
using namespace std;


class Entity{
private:
    string m_Name;
    int m_Age;
public:
    explicit Entity(const string& name) 
        : m_Name(name), m_Age(-1){

    }
    explicit Entity(int age) 
        : m_Name("Unknown"), m_Age(age){

    }
};


void PrintEntity(const Entity& entity){
    //
}


int main(){

    PrintEntity(Entity(22));
    PrintEntity(Entity("Cherno"));

    Entity a("Cherno");
    Entity b(22);


    cin.get();
    return 0;
}
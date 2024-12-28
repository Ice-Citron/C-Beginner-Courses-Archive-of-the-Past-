#include <iostream>
#include <string>
using namespace std;

class Entity{
private:
    string m_Name;
public:
    Entity() : m_Name("Unknown") {

    }
    Entity(const string & name) : m_Name(name) {

    }

    const string& GetName() const{
        return m_Name;
    }

};

int main(){

    int a = 2;
    int* b = new int[10]; //40 bytes allocated

    Entity* e = new Entity[10]; //array of entity provided
                                //allocated array of 10 entity onstack
                                //new, also calls the constructor
    delete[] e;


    cin.get();
    return 0;
}


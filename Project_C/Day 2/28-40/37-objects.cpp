#include <iostream>
#include <string>
using namespace std;

class Entity{
private:
    string m_Name;
public:
    Entity() : m_Name("Unknown"){

    }
    Entity(const string& name) : m_Name(name){

    }

    const string& GetName() const{
        return m_Name;
    }


};

//create object in heap
int main(){

    Entity* e; //memory address stored in e
    {
        Entity* entity = new Entity("Cherno");
        e = entity;
        cout << entity->GetName() << endl;
    }

    delete e;

    cin.get();
    return 0;
}


//create object on stack
/***
int main(){

    Entity entity = Entity("Cherno");
    cout << entity.GetName() << endl;

 
    cin.get();
    return 0;
}
***/
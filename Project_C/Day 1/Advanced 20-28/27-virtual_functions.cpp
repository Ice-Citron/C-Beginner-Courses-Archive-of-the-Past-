#include <iostream>
#include <string>
using namespace std;

class Entity{
private:
public:
    virtual string GetName(){
        return "Entity";
    }
};

class Player : public Entity{
private:
    string m_Name;
public:

    //constructor
    Player(const string& name) : m_Name(name){
    }
    string GetName() override{
        return m_Name;
    }
};


int main(){
    Entity* e = new Entity();
    cout << e->GetName() << endl;

    Player* p = new Player("Cherno");
    cout << p->GetName() << endl;

    cin.get();
    return 0;
}
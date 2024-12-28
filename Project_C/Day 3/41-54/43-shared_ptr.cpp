#include <iostream>
#include <string>
#include <memory>

using namespace std;

class Entity{
private:
public:    
    Entity(){
        cout << "Created Entity!" << endl;
    }

    ~Entity(){
        cout << "Destroyed Entity!" << endl;
    }

    void Print(char x){

        cout << x << endl;
    }

};


int main(){

    std::unique_ptr<Entity> entity = make_unique<Entity>();
    std::shared_ptr<Entity> sharedEntity = make_shared<Entity>();

    entity->Print();


    cin.get();
    return 0;
}

#include <iostream>
#include <string>
using namespace std;

//void PrintEntity(const Entity& e);

class Entity{
private:
public:
    int x, y;

    Entity(int x, int y){
        //Entity* e = this;
        this->x = x;
        this->y = y;

        PrintEntity(*this);
    }

    int GetX() const{
        const Entity* e = this;

        return x;
    }

    void PrintEntity(const Entity& e){

    }

};



int main(){




    cin.get();
    return 0;
}
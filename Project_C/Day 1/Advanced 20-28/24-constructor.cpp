#include <iostream>
using namespace std;

class Entity{
private:
public:
    float X, Y;

    Entity(){
        X = 0.0f;
        Y = 0.0f;
    }

    Entity(float x, float y){
        X = x;
        Y = y;
    }

    void print(){
        std::cout << X << "," << Y << endl;
    }

};

int main(){

    Entity entity(22.3f, 22.0f);
    entity.print();
    cin.get();
    return 0;
}
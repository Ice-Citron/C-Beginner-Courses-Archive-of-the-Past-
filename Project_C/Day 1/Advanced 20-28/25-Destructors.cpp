#include <iostream>
using namespace std;

class Entity{
private:
public:
    float X, Y;

    Entity(){
        X = 0.0f;
        Y = 0.0f;
        cout << "created entity" << endl;
    }

    ~Entity(){
        cout << "destroyed entity" << endl;
    }

    void print(){
        std::cout << X << "," << Y << endl;
    }

};

void Function();

int main(){

    Function();
    cin.get();
    return 0;
}

void Function(){
    Entity e;
    e.print();
}
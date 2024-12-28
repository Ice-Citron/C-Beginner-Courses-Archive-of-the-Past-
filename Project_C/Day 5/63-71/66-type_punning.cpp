#include <iostream>

using namespace std;

struct Entity{
    int x, y;

    int* getPositions(){
        return &x;
    }

};

int main(){

    Entity e = {5, 8};

    int* position = (int*)&e;

    int y = e.y;   
    int x = *(int*)((char*)&e + 0);

    cout << position[0] << " " << position[1] << endl;
    cout << x << " " << y << endl;

    int a = 50;
    double value = *(double*)&a;    


    cin.get();
}
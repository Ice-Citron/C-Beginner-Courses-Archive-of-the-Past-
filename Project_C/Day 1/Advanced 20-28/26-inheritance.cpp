#include <iostream>
using namespace std;

class Entity{
private:
public:
    float X, Y;

    void Move(float xa, float ya){
        X += xa;
        Y += ya;
    }
};

class Player : public Entity{
private:
public:
    const char* Name;

    void Move(float xa, float ya){
        X += xa;
        Y += ya;
    }

    void PrintName(){
        cout << Name << endl;
    }

};

int main(){
    Player player;
    player.Move(5, 5);
    player.X = 2;
    //player.PrintName();

    cin.get();
    return 0;
}


#include <iostream>

using namespace std;

class Entity{

public:
};

class Player : public Entity{

};

class Enemy : public Entity{

};

int main(){

    Player*  player = new Player();
    Entity* thePlayer = player;
    Entity* theEnemy = new Enemy();

    Player* p = dynamic_cast<Player*>(player);

 
    cin.get();
}
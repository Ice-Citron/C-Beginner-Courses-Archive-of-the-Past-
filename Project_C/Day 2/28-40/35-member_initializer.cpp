 #include <iostream>

 class Entity{
private:
    int x, y, z;
public:
    Entity() : x(5), y(1), z(2) 
    {}

    int GetVal(){
        return z+x+y;
    }
 };

int main(){

    Entity e1;

    std::cout << e1.GetVal() << std::endl;
    

    return 0;
}
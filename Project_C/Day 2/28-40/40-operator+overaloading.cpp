#include <iostream>
#include <string>
using namespace std;

struct Vector2{
public:
    float x, y;

    Vector2(float x, float y) 
        : x(x), y(y){}

    Vector2 operator+(const Vector2& other) const{
        return Vector2(x + other.x, y + other.y);
    }

    Vector2 operator*(const Vector2& other) const{
        return Vector2(x * other.x, y * other.y);
    }

    bool operator==(const Vector2& other) const{
        return x == other.x && y == other.y;
    }

    bool operator!=(const Vector2& other) const{
        return !(*this == other);
    }

};


ostream& operator<<(ostream& stream, const Vector2& other){
    stream << other.x << ", " << other.y << endl;
    return stream;
}


int main(){
    Vector2 position(4.0f, 4.0f);
    Vector2 speed(0.5f, 1.5f);
    Vector2 powerup(1.1f, 1.1f);

    Vector2 result = position + speed * powerup;
    cout << result << endl;

    cin.get();
    return 0;
}
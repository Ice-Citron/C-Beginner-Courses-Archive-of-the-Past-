#include <vector>
#include <array>
#include <iostream>

#include "Array.h"
#include "Vector.h"

using namespace std;

struct Vector3{
    float x = 0.0f, y = 0.0f, z = 0.0f;


    Vector3(){}   
    Vector3(float scalar)
        :  x(scalar), y(scalar), z(scalar) {
    }
    Vector3(float x, float y, float z)
        : x(x), y(y), z(z) {
    }

    Vector3 (const Vector3& other)
        : x(other.x), y(other.y), z(other.z)
    {
        cout << "Copied" << endl;
    }
    Vector3 (Vector3&& other)
        : x(other.x), y(other.y), z(other.z){
        cout << "Moved" << endl;
    }
    ~Vector3() {
        cout << "Destroyed" << endl;
    } 

    Vector3& operator = (const Vector3& other){
        cout << "Copied" << endl;
        x = other.x; 
        y = other.y;
        z = other.z;
        return *this;
    }

    Vector3& operator = (Vector3&& other){
        cout << "Moved" << endl;
        x = other.x;
        y = other.y;
        z = other.z;
        return *this;
    }
};

template <typename T>
void PrintVector(const Vector<T>& vector){
    for(size_t i = 0; i < vector.Size(); i++){
        cout << vector[i] << endl;
    }
    cout << "----------------" << endl;
}

template<>
void PrintVector(const Vector<Vector3>& vector){
    for(size_t i = 0; i < vector.Size(); i++){
        cout << vector[i].x << ", " << vector[i].y << ", " << vector[i].z << endl;
    }
    cout << "----------------" << endl;
}


int main(){

    Array<std::string, 2> data;
    data[0] = "Cherno";
    data[1] = "C++";

    //Vector<std::string> vector;
    Vector<Vector3> vector;

    vector.EmplaceBack(1.0f);
    vector.EmplaceBack(2, 3, 4);
    vector.EmplaceBack();
    //vector.Clear();
    vector.EmplaceBack(2, 3, 4);
    vector.EmplaceBack(2, 3, 4);
    vector.PopBack();


    //vector.PushBack(Vector3(1.0f));
    //vector.PushBack(Vector3(2, 3, 4));
    //vector.PushBack(Vector3());
    //vector.PushBack("Cherno");
    //vector.PushBack("C++");
    //vector.PushBack("Vector");

    //vector.EmplaceBack();

    PrintVector(vector);

    cin.get();
}
#include <iostream>
#include <string>
using namespace std;

class Entity{
private:
    int m_X, m_Y;
    int * mX, * mY;
public:

    const int* const getX() const{
        return mX;
    }

    int GetX() const{
        return m_X;
    }

    int GetY() const{
        return m_Y;
    }

    void SetX(int x){
        m_X = x;
    }

    void SetY(int y){
        m_Y = y;
    }

};

int main(){

    const int MAX_AGE = 90;

    int* a = new int;
    *a = 2;
    a = (int*)&MAX_AGE;

    cout << &MAX_AGE << " " << MAX_AGE << endl; 
    cout << a << " " << *a << endl;



    cin.get();
    return 0;
}
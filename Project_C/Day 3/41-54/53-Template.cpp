#include <iostream>
#include <string>

using namespace std;
template<typename T, int N>

class Array{

    T m_Array[N];
public:
    int GetSize() const{
        return N;
    }
};

int main(){

    Array<int, 5> array;
    cout << array.GetSize() << endl;


    cin.get();
    return 0;
}


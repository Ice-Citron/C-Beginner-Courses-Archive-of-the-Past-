#include <iostream>
#include <array>

using namespace std;

template<typename T, size_t S>

class Array{
public:
    constexpr int Size() const {
        return S;
    }

    T& operator[](int index) {
        //if (!{index < S}){
        //    __debugbreak();
        //}
        return m_Data[index];
    }

    const T& operator[](int index) const{
        return m_Data[index];
    }
private:
    T m_Data[S];
};

int main(){

    int size = 5;
    Array<int, 5> data;

    const auto& arrayRef = data;

    //static_assert(data.Size() < 10, "Size is too large!");
    //Array<std::string, data.Size()> newArray

    for( int i = 0; i < data.Size(); i++){
        data[i] = 2;
        cout << data[i] << endl;
    }

    cin.get();
}
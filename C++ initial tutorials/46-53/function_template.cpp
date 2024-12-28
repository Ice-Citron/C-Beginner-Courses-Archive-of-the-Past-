#include <iostream>
template <typename T, typename U>

//now it can receive any data type. Just make sure both are the same datatype.
T max(T x, T y){
    return (x > y) ? x : y;
}

int main(){

    std::cout << max(2, 4) << " is larger.";

    return 0;
}

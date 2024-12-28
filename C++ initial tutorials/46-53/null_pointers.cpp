#include <iostream>

int main(){

    int *pointer = nullptr;
    int x = 123;

    pointer = &x;

    if(pointer == nullptr){
        std::cout << "still a null";
    }
    else{
        std::cout << "address assigned.";
    }

    return 0;
}


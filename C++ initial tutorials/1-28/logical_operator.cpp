#include <iostream>


// and operator = &&
// or operator  = ||
// reverse      = !


int main(){

    int temp;

    std::cout << "Enter the temperauture: ";
    std::cin >> temp;

    //if(temp > 0 && temp < 30){
    if(!(temp <= 0 || temp >= 30)){
        std::cout << "The temperature is good.";
    }
    else{
        std::cout << "The temperature is bad.";
    }

    return 0;
}
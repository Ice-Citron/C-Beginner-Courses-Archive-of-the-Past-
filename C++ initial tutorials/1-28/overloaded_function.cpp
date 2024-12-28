#include <iostream>

void bakePizza(){
    std::cout << "Here is your pizza!\n";
}

void bakePizza(std::string topping1){
    std::cout << "Here is your pizza with " << topping1 << "!\n";
}

void bakePizza(std::string topping1, std::string topping2){
    std::cout << "Here is your pizza with " << topping1 << " and " << topping2 << "!\n";
}

int main(){

    bakePizza("mushroom", "pineapple");
    bakePizza("pineapple");

    return 0;
}


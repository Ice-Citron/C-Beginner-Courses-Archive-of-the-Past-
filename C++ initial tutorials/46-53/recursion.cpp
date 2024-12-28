#include <iostream>

void walk(int steps);
int factorial(int number);

int main(){

    walk(5);
    std::cout << factorial(10);

    return 0;
}

void walk(int steps){
    /*for(int i = 0; i < steps; i++){
        std::cout << "You take a step!\n";
    }*/
    if(steps > 0){
        std::cout << "You take a step!\n";
        walk(steps - 1);
    }
}

int factorial(int number){
    /*int result = 1;
    for(int i = 1; int <= number, int++){
        result = result * i;
    }
    return result;*/
    if(number > 1){
        return number * factorial(number - 1);
    }
    else{
        return 1;
    }
}

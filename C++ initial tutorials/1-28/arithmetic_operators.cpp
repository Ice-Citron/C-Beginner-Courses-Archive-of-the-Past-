#include <iostream>

int main(){

    int students = 20;

    students += 1;
    students ++;

    students -= 1;
    students --;

    students *= 2;
    students /= 2;

    int remainder = students % 3;
    
    std::cout << students << " " << remainder;


    return 0;
}
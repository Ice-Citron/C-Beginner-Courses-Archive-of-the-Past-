#include <iostream>

int main(){

    //double x = (int) 3.141592;
    //int x = 3.14;

    char x = 100; //this is equivalent to "d"

    //std::cout << (char) 100;
    std::cout << x << '\n';

    int correct = 8;
    int question = 10;
    double score = correct / (double) question * 100;

    std::cout << score << '\n';

    return 0;
}
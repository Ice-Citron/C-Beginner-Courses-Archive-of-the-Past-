#include <iostream>

int main(){

    srand(time(NULL));

    int num = (rand() % 6);

    std::cout << num+1;

    return 0;
}



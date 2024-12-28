#include <iostream>

void swap(std::string &x, std::string &y);

int main(){

    std::string x = "cool aid";
    std::string y = "water";
    
    swap(x, y);

    std::cout << x << "\n";
    std::cout << y << "\n";

    return 0;
}

void swap(std::string &x, std::string &y){ //& operator allows the same variable to be mentioned in both main() and the swap function!
    std::string temp;
    temp = x;
    x = y;
    y = temp;
}


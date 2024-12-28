#include <iostream>

int main(){

    //fill(start, end, value);
    std::string foods[10];

    fill(foods, foods + 10/2, "pizza");
    fill(foods + 10/2, foods + 10, "hamburger");

    for(std::string i : foods){
        std::cout << i << "\n";
    }

    return 0;
}


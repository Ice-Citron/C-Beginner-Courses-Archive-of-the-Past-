#include <iostream>
#include <vector>

std::uint64_t value;

int main() {

    std::cin >> value;

    while (value != 1){
        
        std::cout << value << " ";
        if (value % 2 == 1) {
            value = value * 3 + 1;
        }
        else {
            value /= 2;
        }
    }
    
    std::cout << value << " ";

    return 0;
}




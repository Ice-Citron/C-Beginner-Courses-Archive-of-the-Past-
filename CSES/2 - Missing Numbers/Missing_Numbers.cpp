#include <iostream>
#include <vector>

uint64_t size;
uint64_t total;
uint64_t temp;

int main() {

    std::cin >> size;
    total = (size * (size + 1)) / 2;

    for (int i = 0; i < size - 1; i++){
        std::cin >> temp;
        total -= temp;
    }

    std::cout << total;

    return 0;
}
#include <iostream>
#include <vector>

uint64_t iterations;
std::vector<uint64_t> vec;

uint64_t addition = 0;

int main() {

    std::cin >> iterations;

    for (int i = 0; i < iterations; i++) {
        uint64_t temp;
        std::cin >> temp;
        vec.push_back(temp);
    }

    for (int i = 1; i < iterations; i++) {
        if(!(vec[i] >= vec[i-1])){
            uint64_t temp = (vec[i-1] - vec[i]);
            vec[i] += temp;
            addition += temp;
        }
    }
    
    std::cout << addition;

    return 0;
}
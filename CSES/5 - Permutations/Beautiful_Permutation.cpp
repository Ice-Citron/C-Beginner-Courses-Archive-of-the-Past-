#include <iostream>
#include <vector>
#include <cmath>

int init = 0;

int main() {

    std::cin >> init;
    if (init >= 5 || init == 1) {
        int array[init];

        int count = 1;
        for (int i = 0; i < init; i+=2){
            array[i] = count;
            count++;
        }
        count = (int)std::ceil((double)init / 2) + 1;
        for (int i = 1; i < init; i+=2) {
            array[i] = count;
            count++;
        }

        for (int val : array) {
            printf("%d ", val);
        }

    }
    else if (init == 2 || init == 3) {
        std::cout << "NO SOLUTION";
    }
    else if (init == 4) {
        std::cout << "2 4 1 3";
    }


    return 0;
}
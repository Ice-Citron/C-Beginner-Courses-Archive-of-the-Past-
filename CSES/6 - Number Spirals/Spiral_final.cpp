#include <iostream>
#include <cmath>

unsigned long long testNum = 0;
unsigned long long val1;
unsigned long long val2;

int main() {

    std::cin >> testNum;

    for (unsigned long long i = 0; i < testNum; i++) {

        std::cin >> val1; //looking downwards
        std::cin >> val2; //looking rightwards

        if (val1 >= val2) { //val2, rightwards determines sub-position || val1 determines big square
            if (val1 % 2 == 0) { //if class2 V <-
                unsigned long long upperBound = val1 * val1;
                std::cout << (upperBound - val2 + 1) << std::endl;
            }
            else { //if class 1 -> ^
                unsigned long long lowerBound = (val1 - 1) * (val1 - 1) + 1;
                std::cout << (lowerBound + val2 - 1) << std::endl;
            }
        }
        else { //val1, downwards determines sub-position || val2, determines big square
            if (val2 % 2 == 0) { //if class2 V <-
                unsigned long long lowerBound = (val2 - 1) * (val2 - 1) + 1;
                std::cout << (lowerBound + val1 - 1) << std::endl;
            }
            else { //if class 1 -> ^
                unsigned long long upperBound = val2 * val2;
                std::cout << (upperBound - val1 + 1) << std::endl;
            }
        }


    }

}
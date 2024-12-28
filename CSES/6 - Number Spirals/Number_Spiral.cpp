#include <iostream>
#include <cmath>
#include <vector>

unsigned long long testNum;
unsigned long long val1;
unsigned long long val2;

void ConstructClass(unsigned long long maxNum, unsigned long long minNum, unsigned long long lenVal, unsigned long long array[]){
    //std::cout << maxNum << " " << minNum << " " << lenVal << " " << LowerBound << "\n";
    //if V <- (even)
    if (maxNum % 2 == 0) {
        unsigned long long UpperBound = maxNum * maxNum;
        for (unsigned long long i = 0; i < lenVal; i++) {
            array[i] = UpperBound;
            UpperBound--;
        }
    }
    //if -> ^ (odd)
    else {
        unsigned long long LowerBound = (maxNum - 1) * (maxNum - 1) + 1;
        for (unsigned long long i = 0; i < lenVal; i++) {
            array[i] = LowerBound;
            LowerBound++;
        }
    }
}


int main() {    

    std::cin >> testNum;

    for (unsigned long long i = 0; i < testNum; i++) {
        std::cin >> val1; //looking downwards
        std::cin >> val2; //looking rightwards

        //construct array
        unsigned long long maxVal = std::max(val1, val2);
        unsigned long long minVal = std::min(val1, val2);
        unsigned long long temp = (maxVal * maxVal) - ((maxVal - 1) * (maxVal - 1));

        unsigned long long* arr = new unsigned long long[temp];
        ConstructClass(maxVal, minVal, temp, arr);

        if (val1 > val2) { //val2, rightwards determines position
            std::cout << arr[val2-1] << std::endl;
        }
        else { //val1, downwards determines position
            std::cout << arr[temp-val1] << std::endl;
        }

        delete[] arr;
    }



}

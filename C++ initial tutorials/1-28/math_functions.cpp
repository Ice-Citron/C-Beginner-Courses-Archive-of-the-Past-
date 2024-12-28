#include <iostream>
#include <cmath>

//website for math functions: "https://cplusplus.com/reference/cmath/"

int main(){

    double r = 3.141592;
    
    double x = 4;
    double y = 3;
    double min;
    double max;
    double z;

    max = std::max(x, y);
    min = std::min(x, y);

    z = pow(2, 4);
    z = sqrt(9);
    z = abs(-3);
    z = round(r);
    z = ceil(r); //outputs the ceiling number of a value ie, 3.14 outputs 4; 4.2 outputs 5
    z = floor(r); //outputs the floor number of a value ie, 3.6 outputs 3; 55.99 outputs 55

    std::cout << z;

    return 0;
}
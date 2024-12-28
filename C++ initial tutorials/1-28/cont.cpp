#include <iostream>

int main(){

    const double pi = 3.141592; //to ensure that data can never be changed.
    double radius = 10;
    double circumference = 2 * pi * radius;

    const int Light_speed = 299792458;
    const int Width = 1920;
    const int Height = 900;

    std::cout << circumference << "cm";

    return 0;
}
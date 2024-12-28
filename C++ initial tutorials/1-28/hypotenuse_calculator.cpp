#include <iostream>
#include <cmath>

int main(){

    double a;
    double b;
    double c;

    std::cout << "Enter size A: ";
    std::cin >> a;

    std::cout << "Enter size B: ";
    std::cin >> b;

    //a = pow(a, 2);
    //b = pow(b, 2);
    //c = sqrt(a + b);

    c = sqrt(pow(a, 2) + pow(b, 2));

    std::cout << "The hypotenuse of this triangle is " << c << ".";

    return 0;
}
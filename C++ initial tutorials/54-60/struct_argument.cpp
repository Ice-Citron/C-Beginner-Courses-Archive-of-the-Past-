#include <iostream>

struct cars{
    std::string model;
    int year;
    std::string colour;
};

void printcar(cars car);
void paintcar(cars &car, std::string colour);

int main(){

    cars car1;
    cars car2;

    car1.model = "430 GTXX";
    car1.year = 1998;
    car1.colour = "Red";

    car2.model = "EVM E110";
    car2.year = 2035;
    car2.colour = "Blue";

    paintcar(car1, "yellow");
    printcar(car1);

    return 0;
}

void printcar(cars car){
    std::cout << car.model << "\n";
    std::cout << car.year << "\n";
    std::cout << car.colour << "\n";
}

void paintcar(cars &car, std::string colour){
    car.colour = colour;
}


#include <iostream>

std::string concatStrings(std::string string1, std::string string2){
    std::string composite;
    composite.append(string1);
    composite.append(" ");
    composite.append(string2);
    return composite;
}

int main(){

    std::string first_name = "Panithraa";
    std::string last_name = "Prasanna";
    std::string name = concatStrings(first_name, last_name);

    std::cout << name;

    return 0;
}


/*
double square(double length);
double cube(double length);

int main(){

    double length = 5.0;
    double area =  square(length);
    double volume = cube(length);

    std::cout << "The area is " << area << " cm^2.\n";
    std::cout << "The volume is " << volume << " cm^3.";

    return 0;
}

double square(double length){
    return length * length;
}

double cube(double length){
    return length * length * length;
}
*/


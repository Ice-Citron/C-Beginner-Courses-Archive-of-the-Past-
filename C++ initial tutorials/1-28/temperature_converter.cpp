 #include <iostream>

int main(){

    double temp;
    char unit;

    std::cout << "********************* THERMOMETER *********************\n\n";

    std::cout << "F = Fahrenheit\n";
    std::cout << "C = Celsius\n\n";

    std::cout << "What unit would you like to convert to: ";
    std::cin >> unit; 

    switch(unit){
        case 'F':
        case 'f':
            std::cout << "Enter the temperature in Celsius: "; 
            std::cin >> temp;
            temp = 1.8 * temp + 32;
            std::cout << "\nThe tempeature is " << temp << " Fahrenheit.\n";
            break;
        case 'C':
        case 'c':
            std::cout << "Enter the temperature in Fahrenheit: ";
            std::cin >> temp;
            temp = (temp - 32) / 1.8;
            std::cout << "\nThe tempeature is " << temp << " Celsius.\n";
            break;
        default:
            std::cout << "Please only input 'F' or 'C' for the unit.\n";
            break;
    }

    std::cout << "\n*******************************************************\n";

    return 0;
}

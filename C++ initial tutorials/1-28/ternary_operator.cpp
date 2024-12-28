#include <iostream>

int main(){

    //check if grade has passed certain value
    int grade = 75;
    grade >= 60 ? std::cout << "You've passed." : std::cout << "You've failed.";

    std::cout << "\n";

    //check if number is even or odd
    int number = 9;
    number % 2 == 1 ? std::cout << "This number is an odd number." : std::cout << "This number is an even number.";

    std::cout << "\n";

    //check if hungry 
    bool hungry = true;
    //hungry == true ? std::cout << "You are hungry eat some food." : std::cout << "You are not hungry.";
    std::cout << (hungry == true? "You are hungry eat some food." : "You are not hungry.");

    
     

    return 0;
}
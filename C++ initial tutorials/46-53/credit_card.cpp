#include <iostream>

int getdigit(const int number);
int sumodddigit(const std::string cardnumber);
int sumevendigit(const std::string cardnumber);

int main(){

    std::string cardnumber;
    int result = 0;

    std::cout << "Enter credit card number: ";
    std::cin >> cardnumber;

    result = sumodddigit(cardnumber) + sumevendigit(cardnumber);

    std::cout << result << "\n";

    if(result % 10 == 0){
        std::cout << cardnumber << " is valid.";
    }
    else{
        std::cout << cardnumber << " is not valid.";
    }

    return 0;
}

int getdigit(const int number){
    //18 -> 9 for example
    //18%10 = 8
    //18/10 = 1    1%10 = 1
    //1 + 8 = 9
    return number % 10 + (number / 10 % 10);
}

int sumodddigit(const std::string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size() - 2; i >= 0; i -= 2){
        //need to subtract by 48 to convert from string number to int number
        //because of ascii table. number 1-9 in decimal, is 48-57 for string
        sum += getdigit((cardnumber[i] - 48) * 2);
    }
    return sum;
}

int sumevendigit(const std::string cardnumber){
    int sum = 0;
    for(int i = cardnumber.size() - 1; i > 0; i -= 2){
        //need to subtract by 48 to convert from stri ng number to int number
        //because of ascii table. number 1-9 in decimal, is 48-57 for string
        sum += getdigit(cardnumber[i] - 48);
    }
    return sum;
}

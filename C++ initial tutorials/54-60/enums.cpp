#include <iostream>
enum Day {sunday = 0, monday = 1, tuesday = 2, wednesday = 3, thursday = 4, friday = 5, saturday = 6};

int main(){

    Day today = friday;

    switch(today){
        case sunday:
            std::cout << "Today in sunday!";
            break;
        case 1:
            std::cout << "Today in monday!";
            break;
        case 2:
            std::cout << "Today in tuesday!";
            break;
        case 3:
            std::cout << "Today in wednesday!";
            break;
        case 4:
            std::cout << "Today in thursday!";
            break;
        case 5:
            std::cout << "Today in friday!";
            break;
        case 6:
            std::cout << "Today in saturday!";
            break;
    }

    return 0;
}


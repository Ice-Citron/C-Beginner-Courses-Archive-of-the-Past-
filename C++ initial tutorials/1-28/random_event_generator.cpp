#include <iostream>
#include <ctime>

int main(){

    srand(time(0));
    int randNum = rand() % 5 + 1;

    switch(randNum){
        case 1:
            std::cout << "You win a bumper sticker.";
            break;
        case 2:
            std::cout << "You win a black sticker.";
            break;
        case 3:
            std::cout << "You win a red sticker.";
            break;
        case 4:
            std::cout << "You win a blue sticker.";
            break;
        case 5:
            std::cout << "You win a lunch sticker.";
            break;
    }

    return 0;
}


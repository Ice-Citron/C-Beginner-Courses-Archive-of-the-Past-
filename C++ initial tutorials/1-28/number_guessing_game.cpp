#include <iostream>

int main(){

    int num;
    int guess;
    int tries = 0;
    
    srand(time(0));
    num = (rand() % 100) + 1;

    std::cout << "********************* NUMBER GUESSING GAME *********************\n\n";

    do{
        std::cout << "Guess a number between 1 to 100: ";
        std::cin >> guess;
        tries++;
        std::cout << "tries = " << tries;
        std::cout << "\n\n";

        if(guess > num){
            std::cout << "Too high.\n";
        }
        else if(guess < num){
            std::cout << "Too low.\n";
        }
        else{
            std::cout << "Congratulations you got the right answer.\n";
            std::cout << "It took you " << tries << " tries.";
        }
    }while(guess != num);

    std::cout << "\n****************************************************************\n";



    return 0;
}

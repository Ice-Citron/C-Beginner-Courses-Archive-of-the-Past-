#include <iostream>
#include <ctime>

char getuserchoice();
char getcomputerchoice();
void showchoice(char choice); 
void choosewinner(char player, char computer);

int main(){
    char player;
    char computer;

    player = getuserchoice();
    std::cout << "Your choice: ";
    showchoice(player);

    computer = getcomputerchoice();
    std::cout << "The computer's choice: ";
    showchoice(computer);

    choosewinner(player, computer);

    return 0;
}


char getuserchoice(){
    
    char player;

    do{
    std::cout << "******** Rock,Paper,Scissors Game ********\n\n";
    std::cout << "'r' for Rock\n";
    std::cout << "'p' for Paper\n";
    std::cout << "'s' for Scissor\n\n";
    std::cout << "Please select your choice(r, p or s): ";
    std::cin >> player;
    }while(player != 'r' && player != 'p' && player != 's');

    return player;
}

char getcomputerchoice(){

    srand(time(NULL));
    int num = rand() % 3 + 1;
    
    switch(num){
        case 1:
            return 'r';
        case 2:
            return 'p';
        case 3:
            return 's';
    }
    return 0;
}

void showchoice(char choice){
        switch(choice){
        case 'r':
            std::cout << "Rock\n";
            break;

        case 'p':
            std::cout << "Paper\n";
            break;

        case 's':
            std::cout << "Scissors\n";
            break;
    }
}

void choosewinner(char player, char computer){
    switch(player){
        case 'r':
            if(computer == 'r'){
                std::cout << "It's a tie.";
            }  
            else if(computer == 'p'){
                std::cout << "You lose.";
            }
            else if(computer == 's'){
                std::cout << "You win!";
            }
            break;
        case 'p':
            if(computer == 'r'){
                std::cout << "You win!";
            }  
            else if(computer == 'p'){
                std::cout << "It's a tie.";
            }
            else if(computer == 's'){
                std::cout << "You lose.";
            }
            break;
        case 's':
            if(computer == 'r'){
                    std::cout << "You lose.";
                }  
            else if(computer == 'p'){
                std::cout << "You win!";
            }
            else if(computer == 's'){
                std::cout << "It's a tie.";
            }
            break;
    }

}


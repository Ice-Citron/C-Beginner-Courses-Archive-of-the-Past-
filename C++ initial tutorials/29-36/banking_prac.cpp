#include <iostream>
#include <iomanip>

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

    double balance = 100;
    int choice = 0;

    do{
        std::cout << "******************** BANK OF C++ **********************\n\n";
        std::cout << "Options: \n\n";
        std::cout << "1 - Show balance\n";
        std::cout << "2 - Deposit money\n";
        std::cout << "3 - Withdraw money\n";
        std::cout << "4 - Exit\n\n";

        std::cout << "Please enter your choice of action (1-4): ";
        std::cin >> choice;

        std::cin.clear();
        fflush(stdin);

        std::cout << "\n";

        switch(choice){
            case 1: 
                showbalance(balance);
                break;
            case 2:
                balance += deposit();
                showbalance(balance);
                break;
            case 3:
                balance -= withdraw(balance); 
                showbalance(balance);
                break;
            case 4: 
                std::cout << "\n**************** Thanks for visiting! ****************\n";
                break;
            default:
                std::cout << "Invalid choice\n";

        }
    }while(choice != 4);

    return 0;
}

void showbalance(double balance){
    std::cout << "Your balance is: $" << std::setprecision(2) << std::fixed << balance << "\n";
}

double deposit(){
    double amount = 0;
    std::cout << "How much money would you like to deposit: "; 
    std::cin >> amount;

    if(amount > 0){
        return amount;
    }
    else{
        std::cout << "That's not a valid amount!\n";
        return 0;
    }
}

double withdraw(double balance){
    double amount = 0;
    std::cout << "How much money would you like to withdraw: ";
    std::cin >> amount;
    std::cout << "\n";
    
    if(amount > balance){
        std::cout << "Insufficient amount within balance.\n";
        std::cout << "The maximum amount which you can withdraw is $" << balance << ".\n\n";
        return 0;
    }
    else if(amount > 0){
        return amount;
    }
    else{
        std::cout << "That's not a valid amount!\n";
        return 0;
    }
}


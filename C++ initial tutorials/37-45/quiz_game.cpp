#include <iostream>

int main(){

    std::string questions[] = {"1. What year is C++ invented?",
                               "2. How old is pan?",
                               "3. What is grief?"}; 

    std::string options[][4] = {{"A - 1969", "B - 1771", "C - 1881", "D - 1985"},
                                {"A - 14", "B - 15", "C - 16", "D - 17"},
                                {"A - inlp", "B - vision", "C - panny", "D - marvel"}};

    char answers[] = {'D', 'B', 'A'};

    int size = sizeof(questions)/sizeof(questions[0]);
    //int sizeo = sizeof(options[0])/sizeof(options[0][0]);
    char guess;
    int score = 0;

    for(int i = 0; i < size; i++){
        std::cout << "********************" << "\n";
        std::cout << questions[i] << "\n";
        std::cout << "********************" << "\n";

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j ++){
            std::cout << options[i][j] << "\n";
        }

        std::cout << "********************" << "\n";
        std::cout << "What is your choice(A-D): ";
        std::cin >> guess;
        guess = toupper(guess);

        if(guess == answers[i]){
            std::cout << "Congratulations! Your coorect.\n";
            score++;
        }
        else{
            std::cout << "Incorrect. The answer is " << answers[i] << ".\n";
        }
    }

    std::cout << "********************" << "\n";
    std::cout << "Results: " << score << "/3" << "\n";
    std::cout << "********************" << "\n";
    

    return 0;
}


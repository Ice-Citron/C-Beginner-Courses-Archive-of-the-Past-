#include <iostream>

int main(){

    std::string student[] = {"Spongebob", "Patrick", "Steward"};

    for(int i = 0; i < sizeof(student)/sizeof(std::string); i++){
        std::cout << student[i] << "\n";
    }

    return 0;
}


#include <iostream>

int main(){

    std::string student[] = {"Spongebob", "Patrick", "Steward"};

    for(std::string i : student){
        //std::cout << student[i] << "\n";
        std::cout << i << "\n";
    }

    return 0;
}


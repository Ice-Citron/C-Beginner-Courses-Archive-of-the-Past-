#include <iostream>

int main(){

    std::string name;

    std::cout << "Enter your first name: ";
    std::getline(std::cin, name);

    // website: https://cplusplus.com/reference/string/string/

    /*
    name.empty(); returns true if string variable is empty
    name.length(); len(string variable)
    name.clear(); to remove string value of variable 
    name.append(); to add word to string variable
    name.at(1); to retrieve the 2nd letter of string variable
    name.insert(0, "hello there"); to insert value to string variable
    name.find(' '); to find the location of the space value in string variable
    name.erase(0, 3); deletes first 3 character of string variable
    */

    if(name.empty()){
        std::cout << "You didn't enter your name.";
    }
    else if(name.length() > 12){
        std::cout << "Your first name can't be over 12 characters.";
    }
    else{
        std::cout << "Welcome back, " << name << ".\n";
    }


    return 0;
}
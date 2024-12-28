#include <iostream>
#include <vector>

//typedef std::vector<std::pair<std::string, int>> pairlist_t;
//typedef std::string text_t;
//typedef int number_t;

using text_t = std::string;
using number_t = int;

int main(){

    text_t firstname = "shi hao";
    number_t age = 15;

    std::cout << firstname << '\n' << age << '\n';

    return 0;
}
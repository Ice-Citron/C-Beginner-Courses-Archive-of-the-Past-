#include <iostream>

class Pizza{
    public:
        std::string topping1;
        std::string topping2;
    
    Pizza(){

    }
    Pizza(std::string t_one){
        topping1 = t_one;
    }
    Pizza(std::string t_one, std::string t_two){
        topping1 = t_one;
        topping2 = t_two;
    }
};

int main(){

    Pizza pizza0;
    Pizza pizza1("peperoni");
    Pizza pizza2("pinapple", "cheesy dibbles");

    std::cout << pizza1.topping1 << "\n";

    std::cout << pizza2.topping1 << "\n";
    std::cout << pizza2.topping2 << "\n";

    return 0;
}


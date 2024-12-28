#include <iostream>

int main(){

    std::string name = "Panithraa";
    std::string *pname = &name;

    //now if *pname is called, "Panithraa" will be the output. if pname is called, an address will be the output

    std::cout << name << "\n";
    std::cout << *pname << "\n";
    std::cout << pname << "\n";

    std::string lista[] = {"AA", "BB", "CC"};
    std::string *plista = lista;

    //if lista and plista is called, the list will be the output.
    //if *plista is called, the 1st variable of list will be the output.
    std::cout << lista << "\n";
    std::cout << plista << "\n";
    std::cout << *plista << "\n";

    return 0;
}


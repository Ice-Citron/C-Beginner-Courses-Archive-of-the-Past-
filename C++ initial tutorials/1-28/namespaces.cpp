#include <iostream>

namespace first {
    int x = 1;
}

namespace second {
    int x = 2;
}

int main(){
    using namespace first;
    using std::string;

    string x = "hello there";

    std::cout << x << '\n';
    std::cout << first::x << " " << second::x;

    return 0;
}
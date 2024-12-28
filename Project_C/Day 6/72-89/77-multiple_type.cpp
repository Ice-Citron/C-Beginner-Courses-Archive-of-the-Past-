#include <iostream>
#include <variant>

using namespace std;

int main(){

    std::variant<std::string, int> data;
    data = "Cherno";
    
    cout << std::get<std::string>(data) << endl;
    data = 2;
    cout << std::get<int>(data) << endl;

    cout << data.index() << endl;
    auto value = std::get_if<int>(&data);
    cout << value << endl;
}
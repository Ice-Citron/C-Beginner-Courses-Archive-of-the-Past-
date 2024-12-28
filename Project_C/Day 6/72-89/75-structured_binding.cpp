#include <iostream>
#include <tuple>
#include <string>

using namespace std;


std::tuple<std::string, int> CreatePerson(){
    return {"Cherno", 24};
} 


int main(){

    auto[name, age] = CreatePerson();
    cout << name << endl;

    //auto person = CreatePerson();
    //auto name = std::get<0>(person);
    //int age = std::get<1>(person); 

    //std::string name1;
    //int age1;
    //std::tie(name1, age1) = CreatePerson();


    cin.get();
}
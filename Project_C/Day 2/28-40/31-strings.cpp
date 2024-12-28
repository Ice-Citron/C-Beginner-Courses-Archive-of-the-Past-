#include <iostream>
//#include <string>
using namespace std;

void PrintString(const string& str){
    cout << str << endl;
}


int main(){

    char name[] = "Cherno";
    char name2[7] = {'C', 'h', 'e', 'r', 'n', 'o', '\0'};

    cout << name << endl;
    cout << name2 << endl;

    string name3 = std::string("cherno") + " hello!";
    string name4 = "cherno";
    name4 += " hello!";

    cout << name3 << " " << name4 << endl;

    //checking is letter "no" is inside name4 varaible
    bool contains = name4.find("no") != string::npos;
    cout << contains << endl;


    cin.get();
    return 0;
}
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

class Dog {
private:
    int age;
    string name;
public:
    Dog(){
        age = 3;
        name = "Dummy";
    }
    
    //const parameter
    //this function uses reference, meaning direct ref to the value age. const important.
    void setAge(const int & a){
        age = a;
        cout << "const" << endl;
    }
    void setAge(int & a){
        age = a;
        cout << "NonConst" << endl;
    }

    //const return value
    const string& getName(){
        return name;
    }

    //const function -- const function can only call another const funcion. 
    //not even a const return function
    void printDogName() const {
        cout << name << "-constV" << endl;
    }

    void printDogName(){
        cout << name << "-nonConstV" << endl;
    }
};


int main() {
    Dog d;
    const Dog d2;

    const int cc = 52;
    int cn = 52;

    d.setAge(50);
    d.setAge(cc);
    d.setAge(cn);

    //d.printDogName();
    //d2.printDogName();

    //const string& n = d.getName();
    //cout << n << endl;

    //int i = 9;
    //d.setAge(i);
    //cout << i << endl;

    return 0;
}
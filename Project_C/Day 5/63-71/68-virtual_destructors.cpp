#include <iostream>
using namespace std;

class Base{
private:
public:
    Base(){
        cout << "Constructor" << endl;
    }
    virtual ~Base(){
        cout << "Destructor" << endl;
    }
};

class Derived : public Base{
private:
public:
    Derived(){
        cout << "Derived Constructor" << endl;
    }
    ~Derived(){
        cout << "Derived Destructor" << endl;
    }

};

int main(){

    Base* base = new Base();
    delete base;
    cout << '\n';
    Derived* derived = new Derived();
    delete derived;
    cout << '\n';
    Base* poly = new Derived();
    delete poly;
    
    cin.get();
}
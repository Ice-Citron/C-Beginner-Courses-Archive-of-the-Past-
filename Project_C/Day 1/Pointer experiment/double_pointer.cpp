#include <iostream>
#include <cstdlib>

using namespace std;

int main(){

    int box = 5;
    int * ptr = &box;
    int ** dptr = &ptr;
    
    cout << "box holds: " << box << endl;
    cout << "box lives at: " << &box << endl;
    cout << "ptr points to the address: " << ptr << endl;
    cout << "The thing that ptr points to has the value" << *ptr << endl;
    cout << "ptr lives at: " << &ptr;
    cout << "dptr points to: " << dptr;
    cout << "The thing that dptr points to has the value of: " << *dptr << endl;
    cout << "What is ptr pointing to, by double pointing: " << **dptr << endl;
    cout << "dptr lives at: " << &dptr << endl;

    cout << "\n\nThing:              dptr                  ptr              box       \n";
    cout << "Double_point      :[" << **dptr<< "]----[" << "]----[" << "]\n";
    cout << "Value_address     :[" << *dptr<< "]----[" << *ptr<< "]----[" << "]\n";
    cout << "Values            :[" << dptr << "]----[" << ptr << "]----[" << box << "]\n";
    cout << "Addresses         :[" << &dptr<< "]----[" << &ptr<< "]----[" << &box<< "]\n";





    return 0;
}



#include <iostream>
#include <vector>
#include "Vector.h"

using namespace std;

int main(){

    //std::vector<int> values = { 1, 2, 3, 4, 5};
    Vector<int> values;
    values.EmplaceBack(1);
    values.EmplaceBack(2);
    values.EmplaceBack(3);
    values.EmplaceBack(4);
    values.EmplaceBack(5);

    cout << "Not using iterators: " << endl;
    for(int i = 0; i < values.Size(); i++){
        cout << values[i] << endl;
    }

    cout << "Range-based for loop: " << endl;
    for(int value : values){
        cout << value << endl;
    }

    cout << "Iterator: " << endl;
    for (std::vector<int>::iterator it = values.begin();
        it != values.end(); it++){
        cout << *it << endl;
    }


    cin.get();
}
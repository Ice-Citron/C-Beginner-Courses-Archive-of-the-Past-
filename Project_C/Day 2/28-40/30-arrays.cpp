#include <iostream>
#include <array>
using namespace std;

int main(){

    int example[5];
    int* another = new int[5];

    for (int i = 0; i < 5; i++){
        example[i] = 2;
    }
    for (int i = 0; i < 5; i++){
        another[i] = 2;
    }

    delete[] another; 

    int count = sizeof(example) / sizeof(int);
    cout << count << endl;
     
    /*** 
    int example[5];
    
    for (int i = 0; i < 5; i++){
        example[i] = 2;
    }

    cout << example[1] << endl;
    cout << *example << endl;
    ***/

    array<int, 5> aknot;
    cout << aknot.size() << endl;

    
    cin.get();
    return 0;
}
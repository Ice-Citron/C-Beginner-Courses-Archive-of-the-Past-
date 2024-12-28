#include <iostream>
using namespace std;

//takes less memory as only 8bits
enum Example : unsigned char{
    A = 0, B = 2, C = 6
};

int a = 0;
int b = 1;
int c = 2;

int main(){

    int value = 5;

    if (value == B){
        // do something here
    }

    cin.get();


    return 0;
}
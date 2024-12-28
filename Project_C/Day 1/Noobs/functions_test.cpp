#include <iostream>
using namespace std;

int adding(int a, int b);

int main(){

    int num1, num2;

    cin >> num1;
    cin >> num2;

    cout <<  "The output is: " <<adding(num1, num2) << endl;

    return 0;
}



int adding(int a, int b){
    
    int c = a+b;

    return c;
}
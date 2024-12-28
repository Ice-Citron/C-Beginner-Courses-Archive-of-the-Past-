#include <iostream>

using namespace std;

void PrintSum(int a, int b){
    cout << a << " + " << b << " = " << (a + b) << endl;
}

int main(){

    int value = 0;
    PrintSum(++value, ++value);    

    cin.get();
} 
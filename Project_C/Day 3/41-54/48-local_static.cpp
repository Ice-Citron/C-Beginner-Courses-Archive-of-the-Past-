#include <iostream>
using namespace std;

void Function(){



    static int i = 0;
    i++;
    cout << i << endl;
}


int main(){

    for(int i = 0; i<4; i++){
        Function();
    }

    cin.get();


    return 0;
}
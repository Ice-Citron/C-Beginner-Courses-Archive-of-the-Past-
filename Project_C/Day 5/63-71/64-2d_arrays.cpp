#include <iostream>
#include <array>
using namespace std;



int main(){

    //2 dimensional array
    int** a2d = new int*[50];
    for (int i = 0; i < 50; i++){
        a2d[i] = new int[50];
    }

    int*** a3d = new int**[50];
    for(int i=0; i<50; i++){
        a3d[i] = new int*[50];
        for (int j=0; j<50; j++){
            int** ptr = a3d[i];
            ptr[j] = new int[50];
        }
    }

    a2d[0][1] = 0;
    a3d[0][0][1] = 0;





    cin.get(); 
} 
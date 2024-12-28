#include <iostream>
#include <cstdlib>

using namespace std;

int box1 = 1;
int box2 = 2;
int* gptr;

void passByPtr(int* ptr);
void passByPtrRef(int*& ptrRef);

int main(int agrc, char* agrv[]){

    int* p = &box1;
    gptr = &box2;

    cout << "\n____________Current Conditions____________\n";

    //passByPtr(p);
    //passByPtrRef(p);

    if (p == &box1){
        cout << "p is pointing to box1\n";
    }
    else if (p == &box2){
        cout << "p is pointing to box2\n";
    }
    else{
        cout << "p is pointing to another box\n";
    }

    if (gptr == &box1){
        cout << "gptr is pointing to box1\n";
    }
    else if (gptr == &box2){
        cout << "gptr is pointing to box2\n";
    }
    else{
        cout << "gptr is pointing to another box\n";
    }

    cout << "box1 contains the value: " << box1 << endl;
    cout << "box2 contains the value: " << box2 << endl;

    return 0;
}

void passByPtr(int * ptr){
    *ptr = 3;
    ptr = gptr;
    *ptr = 4;
    cout << "\n______________ passByPtr has been called______________\n";
}

void passByPtrRef(int *& ptrRef){
    *ptrRef = 5;
    ptrRef = gptr;
    *ptrRef = 6;
    cout << "\n______________ passByPtrRef has been called______________\n";
}


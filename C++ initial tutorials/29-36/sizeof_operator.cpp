#include <iostream>

int main(){
    //note that sizeof just outputs how big a variable is in terms of BYTES.
    
    double gpa = 2.5;

    std::cout << sizeof(gpa) << "bytes";

    return 0;
}


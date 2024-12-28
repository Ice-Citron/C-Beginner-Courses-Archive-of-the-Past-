#include <iostream>

int main(){

    int *array = nullptr;
    int size;
    std::cout << "Size of array: ";
    std::cin >> size;

    array = new int[size];

    for(int i = 0; i < size; i++){
        int temp;
        std::cout << "Grade of student #" << i+1 << ": ";
        std::cin >> temp;
        array[i] = temp;
    }

    return 0;
}



/*int main(){

    int *pnum = nullptr;

    pnum = new int;

    *pnum = 21;

    std::cout << pnum << "\n";

    delete pnum;

    std::cout << pnum << "\n";

    return 0;
}*/


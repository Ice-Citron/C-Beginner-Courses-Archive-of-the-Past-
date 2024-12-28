#include <iostream>

int searcharray(int array[], int size, int element);

int main(){

    int numbers[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size = sizeof(numbers)/sizeof(numbers[0]);
    int index;
    int mynum;

    std::cout << "What number would you like to search for: ";
    std::cin >> mynum;

    index = searcharray(numbers, size, mynum);

    if(index != 1){
        std::cout << mynum << " is at index " << index << " in the array.";
    }
    else{
        std::cout << mynum << " is not in the array.";
    }

    return 0;
}

int searcharray(int array[], int size, int element){
    for(int i = 0; i < size; i++){
        if(array[i] == element){
            return i;
        } 
    }
    return -1;
}

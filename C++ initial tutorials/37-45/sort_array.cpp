#include <iostream>

void sort(int array[], int size);

int main(){

    int array[] = {9, 1, 3, 2, 5, 4, 7, 6, 8, 10};
    int size = sizeof(array)/sizeof(array[0]);

    sort(array, size);

    for(int i : array){
        std::cout << i << "\n";
    }

    return 0;
}

void sort(int array[], int size){
    int temp;
    for(int i = 0; i < size - 1; i++){
        for(int j = 0; j < size - i - 1; j++){
            if(array[j] > array[j+1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j+1] = temp;
            }

        }
    }
}
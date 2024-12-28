#include <iostream>

double gettotal(double prices[], int size);
int main(){

    double prices[] = {2.1, 3.2, 4.33, 43.2, 44.2};
    int size = sizeof(prices)/sizeof(prices[0]);
    double total = gettotal(prices, size);

    std::cout << "$" << total;

    return 0;
}

double gettotal(double prices[], int size){
    double total = 0;
    for(int i = 0; i < size; i++){
        total += prices[i];
    }
    return total;
}

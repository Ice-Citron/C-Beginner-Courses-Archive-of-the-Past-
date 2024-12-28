#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int main(){

    vector<int> values = {3, 5, 1, 4, 2};
    //std::sort(values.begin(), values.end(), greater<int>());
    std::sort(values.begin(), values.end(), [](int a, int b){
        if ( a == 1){return false;}
        if ( b == 1){return true; }
        return a < b;
    });

    for(int value : values){
        cout << value << endl;
    }

    cin.get();
}
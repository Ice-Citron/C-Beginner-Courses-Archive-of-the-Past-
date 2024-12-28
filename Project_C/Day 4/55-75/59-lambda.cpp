#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;


//void ForEach(const vector<int>& values, void(*func)(int)){
void ForEach(const vector<int>& values, const function<void(int)>& func){
    for (int value : values){
        func(value);
    }
}

int main(){
 
    vector<int> values = { 1, 3, 4, 2, 3};
    auto it = find_if(values.begin(), values.end(), [](int value){ return value > 3;});
    cout << *it << endl;
    int a = 5;
    auto lambda = [&a](int value) {
        cout << "value: " << value << endl;
        cout << a << endl;}; 
    ForEach(values, lambda);    

    cin.get();
    return 0;
}

/***
int main(){
 
    vector<int> values = { 1, 3, 4, 2, 3};
    int a = 5;
    auto lambda = [&a](int value) {
        cout << "value: " << value << endl;
        cout << a << endl;}; 
    ForEach(values, lambda);    

    cin.get();
    return 0;
}
***/
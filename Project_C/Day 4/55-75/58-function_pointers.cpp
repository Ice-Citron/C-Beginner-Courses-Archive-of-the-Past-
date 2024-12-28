#include <iostream>
#include <vector>
using namespace std;


void Hello(int value){
    cout << "hello world " << value << endl;
}


void ForEach(const vector<int>& values, void(*func)(int)){
    for (int value : values){
        func(value);
    }
}

int main(){

    //typedef void(*func)(int);
    //func function = Hello;
    //function(16);
    vector<int> values = {1, 5, 4, 2, 3};
    ForEach(values, Hello);

    cin.get();
    return 0;
}
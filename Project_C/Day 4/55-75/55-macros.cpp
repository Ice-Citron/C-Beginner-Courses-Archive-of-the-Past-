#include <iostream>
#include <string>

#if PR_DEBUG == 0
using namespace std;
#define print(x) std::cout << x << std::endl;
#endif

int main(){

    for(int i = 0; i<4; i++){
        print("hello world")
    }


    return 0;
}
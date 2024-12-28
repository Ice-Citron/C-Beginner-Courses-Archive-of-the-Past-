#include <iostream>
using namespace std;


int s_speed, s_level = 3;
int S_speed = 21, S_level = 3;

int main(){

    //if(S_level > 10){S_speed = 15;}
    //else if(S_level > 5){S_speed = 10;}
    //else{S_speed = 5;}

    s_speed = s_level > 10 ?  15:
              s_level >  5 ?  10:
                               5;

    S_level = S_speed > 15? 1:
              S_speed > 10? 2:
              S_speed > 5 ? 3:
                            0;


    cout << s_speed << " " << s_level << endl;
    cout << S_speed << " " << S_level << endl;

}

#include <iostream>

class Stove{
    private:
        int temperature = 0;
    public:

    //the constructor can call upon the setter
    Stove(int temp){
        settemp(temp);
    }

    //the getter which allows the user to read the temperature variable that is private
    int gettemp(){
        return temperature;
    }

    //the setter which allows the user to edit the temperature variable that is private
    void settemp(int temp){
        if(temp < 0){
            temperature = 0;
        }
        else if(temp >= 10){
            temperature = 10;
        }
        else{
            temperature = temp;
        }
    }
};

int main(){

    Stove stove1(1000);

    //stove1.temperature = 1000;
    //stove1.settemp(100);
    std::cout << stove1.gettemp();

    return 0;
}


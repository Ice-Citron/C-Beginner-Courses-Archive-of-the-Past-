#include <iostream>

using namespace std;

class Random{
public:
    Random(const Random&) = delete;

    static Random& Get(){
        return s_Instance;
    }

    float Float() {return m_RandomGen;}

private:

    Random() {

        float m_RandomGen = 0.5f;

        static Random s_Instance;
    }

};

Random Random::s_Instance;

 

int main(){

    Random& instance = Random::Get();
    instance.Function();

    cin.get();
}
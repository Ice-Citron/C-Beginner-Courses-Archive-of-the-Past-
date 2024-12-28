#include <iostream>
#include <cmath>

using namespace std;

#include <string>
#include <chrono>


class Timer{
public:
    Timer(const char* name) 
        : m_Name(name), m_Stopped(false)
    {
        m_StartTimePoint = std::chrono::high_resolution_clock::now();
    }

    void Stop(){
        auto endTimePoint = std::chrono::high_resolution_clock::now();

        long long start = std::chrono::time_point_cast<std::chrono::milliseconds>(m_StartTimePoint).time_since_epoch().count();
        long long end = std::chrono::time_point_cast<std::chrono::milliseconds>(endTimePoint).time_since_epoch().count();

        cout << m_Name << ": " << (end - start) << "ms" << endl;

        m_Stopped = true;
    }

    ~Timer(){
        if (!m_Stopped){
            Stop();
        }
    }


private:
    const char* m_Name;
    std::chrono::time_point<std::chrono::steady_clock> m_StartTimePoint;
    bool m_Stopped;

};

void Function1(){
    Timer timer("Function1");
    for (int i = 0; i < 1000; i++){
        cout << "hello world # " << i << endl;
    }
}

void Function2(){
    Timer timer("Function2");
    for(int i = 0; i < 1000; i++){
        cout << "hello world # " << i << endl;
    }
}

int main(){

    Function1();
    Function2();

    cin.get();
}

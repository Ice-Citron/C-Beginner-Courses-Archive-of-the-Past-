#include <iostream>
#include <memory>
#include <chrono>
#include <array>

using namespace std;

class Timer{

public:
    Timer(){
        m_StartTimepoint = std::chrono::high_resolution_clock::now();
    }

    ~Timer(){
        Stop();
    }

    void Stop(){
        auto m_endTimepoint = std::chrono::high_resolution_clock::now();
        auto start = std::chrono::time_point_cast<std::chrono::microseconds>(m_StartTimepoint).time_since_epoch().count();
        auto end = std::chrono::time_point_cast<std::chrono::microseconds>(m_endTimepoint).time_since_epoch().count();

        auto duration = end - start;
        double ms = duration * 0.001;

        cout << duration << " us || " << ms << " ms" << endl;
    }
private:
    std::chrono::time_point < std::chrono::high_resolution_clock > m_StartTimepoint;
};


int main(){

    struct Vector2{
        float x, y;
    };

    cout << "make_shared" << endl;
    {
        std::array<std::shared_ptr<Vector2>, 1000> sharedPtrs;
        Timer timer;
        for(int i = 0; i < sharedPtrs.size(); i++){
            sharedPtrs[i] = std::make_shared<Vector2>();
        }
    }

    cout << "shared ptr" << endl;
    {
        std::array<std::shared_ptr<Vector2>, 1000> sharedPtrs;
        Timer timer;
        for(int i = 0; i < sharedPtrs.size(); i++){
            sharedPtrs[i] = std::shared_ptr<Vector2>(new Vector2());
        }
    }
    
    cout << "make_unique" << endl;
    {
        std::array<std::unique_ptr<Vector2>, 1000> sharedPtrs;
        Timer timer;
        for(int i = 0; i < sharedPtrs.size(); i++){
            sharedPtrs[i] = std::make_unique<Vector2>();
        }
    }
    
    /***
    int value = 0;
    {
        Timer timer;
        for (int i = 0; i < 1000000; i++){
            value += 2;
        }
    }

    cout << value << endl;
    ***/

    cin.get();
}
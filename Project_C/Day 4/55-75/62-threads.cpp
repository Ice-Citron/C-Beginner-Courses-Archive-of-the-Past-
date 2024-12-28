#include <iostream>
#include <thread>
#include <chrono>

static bool s_Finished = false;

using namespace std;

void doWork(){ 

    using namespace std::literals::chrono_literals;

    while (!s_Finished){ 
        cout << "Working...\n";
        this_thread::sleep_for(1s);
    }
}


int main(){

    std::thread worker(doWork);
    cin.get();
    s_Finished = true;
    worker.join();
    cin.get();
}

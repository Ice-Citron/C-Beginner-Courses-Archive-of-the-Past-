#include <iostream>
#include <string>

using namespace std;

struct AllocationMetrics{
    uint32_t TotalAllocated = 0;
    uint32_t TotalFreed = 0;

    uint32_t CurrentUsage(){
        return TotalAllocated - TotalFreed;
    }
};

static AllocationMetrics s_AllocationMetrics;

void* operator new(size_t size){
    s_AllocationMetrics.TotalAllocated += size;
    //cout << "allocating " << size << " bytes" << endl;
    return malloc(size);
}

void operator delete(void* memory, size_t size){
    s_AllocationMetrics.TotalAllocated += size;
    //cout << "memory freed" << endl;
    free(memory);
}

struct Object{
    int x, y, z;    
};

static void PrintMemoryUsage(){
    cout << "memory usage: " << s_AllocationMetrics.CurrentUsage() << "bytes" << endl;
}

int main(){

    PrintMemoryUsage();
    std::string char1 = "hello there hello";

    Object* obj = new Object;

    {
        std::unique_ptr<Object> obj1 = std::make_unique<Object>();
        PrintMemoryUsage();
    }


    cin.get();
}


#pragma once
#include <iostream>
template <typename T, size_t S>

class Array{
public:
    Array(){

    }

    constexpr size_t Size() const {
        return S;
    }

    T& operator[] (size_t index) {
        return m_Data[index];
    }

    T* Data() {
        return m_Data;
    }

private:  
    T m_Data[S];
};
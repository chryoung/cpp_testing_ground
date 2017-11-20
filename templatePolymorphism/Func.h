#pragma once
#include "inherit_tratis.h"
#include <iostream>

class Func
{
public:
    Func();
    ~Func();
    template<typename T>
    void operator()(T&& param) {
        print(std::forward<T>(param), static_cast<inherit_traits<T>*>(nullptr));
    }
private:
    template<typename T>
    void print(T&& param, base_tratis*)
    {
        std::cout << "Base traits detected!\n";
    }

    template<typename T>
    void print(T&& param, derived_traits*)
    {
        std::cout << "Derived traits detected!\n";
    }
};


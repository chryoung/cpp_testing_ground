#pragma once
#include "Base.h"
class Derived :
    public Base
{
public:
    using inherit_category = derived_traits;
    Derived();
    ~Derived();
    void Print() override;
    void PrintDerived();
};


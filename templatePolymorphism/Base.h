#pragma once
#include "inherit_tratis.h"

class Base
{
public:
    using inherit_category = base_tratis;
    Base();
    virtual ~Base();
    virtual void Print();
    virtual void Do();
};


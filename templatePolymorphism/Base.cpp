#include "Base.h"
#include <iostream>
#include "Func.h"


Base::Base()
{
}


Base::~Base()
{
}

void Base::Print()
{
    using namespace std;

    cout << "Base::Print()\n";
}

void Base::Do()
{
    Func()(*this);
}

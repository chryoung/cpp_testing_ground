#include "Derived.h"
#include <iostream>


Derived::Derived()
{
}


Derived::~Derived()
{
}

void Derived::Print()
{
    using namespace std;

    cout << "Derived::Print()\n";
}

void Derived::PrintDerived()
{
    using namespace std;

    cout << "Derived::PrintDerived()\n";
}

// File:    protected.cpp
// 
// Testing: whether or not two different derived classes inherited
//          from the same base class can access each other's common
//          protected member.
// 
// Result:  No.

#include <iostream>

using namespace std;

struct A {
    virtual ~A() = default;
protected:
    int a;
};

struct B:
    public A
{
protected:
    int b;
};

struct C:
    public A
{
    void Get(const B& b) {
        //Cannot access to the common protected member.
        //a = b.a;
    }
protected:
    int c;
};

int main()
{
    B b;
    C c;
    c.Get(b);
}


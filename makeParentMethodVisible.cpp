// File:    makeParentMethodVisible.cpp
// 
// Testing: whether or not a derived class can make base's protected
//          methods public by overriding them.
// 
// Result:  Yes.

#include <iostream>

using namespace std;

class A
{
protected:
    virtual void print() {
        cout << "A\n";
    }
};

class B: private A
{
public:
    virtual void print() override {
        A::print();
        cout << "B\n";
    }
};

int main()
{
    B b;
    b.print();
}


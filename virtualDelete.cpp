// File:    virtualDelete.cpp
// 
// Testing: will deleting a base class pointer points to derived
//          object calls the destructor of the derived class.
// 
// Result:  Yes.

#include <iostream>

using namespace std;

class A {
public:
    virtual ~A() {
        cout << "~A() called\n";
    }
    int a;
    int b;
};

class B:
    public A {
public:
    ~B() {
        cout << "~B() called\n";
    }
    int c;
    int d;
};

int main() {
    A* ab = new B;
    ab->a = 10;
    ab->b = 20;
    delete ab;
}

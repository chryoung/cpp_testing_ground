// File: shared_ptrPolymorphism.cpp
// 
// Testing: Polymorphism of std::shared_ptr
// 
// Result: std::shared_ptr has polymorphism.

#include <iostream>
#include <memory>
#include <set>

using namespace std;

class A {
public:
    virtual ~A() {
        cout << "Destructing A.\n";
    }
    int a;
    int b;
};


class B:
    public A
{
public:
    ~B() {
        cout << "Destructing B.\n";
    }
    int c;
    int d;
};

set<shared_ptr<A>> aset;

void insertToASet(shared_ptr<A> a)
{
    aset.insert(a);
}

int main()
{
    shared_ptr<B> ptrB{new B};
    shared_ptr<A> a = ptrB;
    insertToASet(a);
}

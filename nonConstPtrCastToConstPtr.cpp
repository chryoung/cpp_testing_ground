// File:    nonConstPtrCastToConstPtr.cpp
// 
// Testing: whether or notpointer to non-const variable can be casted to
//          pointer to const variable.
// 
// Result:  Yes.


#include <iostream>

int main()
{
    using std::cout;

    char c = 'a';
    char *pc = &c;
    // The casting below is permitted.
    const char *cpc = (const char *)(pc);

    *pc = 'b';
    // The content of a const char cannot be changed.
    // const char * means that the pointer can be changed
    // but the content to which it points cannot be changed.
    //*cpc = 'c';


    cout << c << *pc << *cpc << std::endl;
}

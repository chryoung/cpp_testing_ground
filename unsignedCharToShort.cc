// File:    unsignedCharToShort.cc
// 
// Testing: casting unsigned char to signed short and vice versa.
// 
// Result:  

#include <iostream>

using namespace std;

int main()
{
  unsigned char a = 255;
  short b = static_cast<short>(a);
  short c = a;
  cout << a << " -> " << b << endl; // b is 255.
  cout << a << " -> " << c << endl; // c is 255.

  char d = -128;
  unsigned short e = static_cast<unsigned short>(a);
  unsigned short f = c;
  cout << d << " -> " << e << endl; // e is 255.
  cout << d << " -> " << f << endl; // f is 255.
}


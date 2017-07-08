// File:    bitOperationMixingSignedAndUnsigned.cpp
// 
// Testing: bit operation when mixing signed and unsigned number.
// 
// Result:  When negative varible has shorter bytes does bit operation with
//          variable has longer bytes, it is got promoted while remaining
//          its sign.

#include <iostream>

using namespace std;

int main()
{
    char signedC1 = 1;
    char signedC2 = -69;
    unsigned short unsignedS = 0;

    // signedC1 is treated as 0x0001
    unsignedS = signedC1;
    cout << hex << unsignedS << endl; // 1

    unsignedS <<= 8;
    cout << hex << unsignedS << endl; // 100

    // signedC2 is treated as 0xFFBB
    unsignedS |= signedC2;
    cout << hex << unsignedS << endl; // ffbb
}


#include <iostream>
#include "staticATwo.h"

void staticATwo()
{
    using namespace std;
    cout << "In staticATwo()" << endl;

    #ifdef DEFINE_FOR_STATIC_A
    bool definedForA = true;
    #else
    bool definedForA = false;
    #endif

    if (definedForA)
        cout << "\"DEFINE_FOR_STATIC_A\" seen from staticATwo()" << endl;

    #ifdef DEFINE_FOR_FOO
    bool definedForFoo = true;
    #else
    bool definedForFoo = false;
    #endif

    if (definedForFoo)
        cout << "\"DEFINE_FOR_FOO\" seen from staticATwo()" << endl;
}

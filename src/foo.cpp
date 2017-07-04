#include <iostream>
#include "foo.h"

void foo()
{
    using namespace std;
    cout << "in foo()" << endl;

    #ifdef DEFINE_FOR_STATIC_A
    bool definedForA = true;
    #else
    bool definedForA = false;
    #endif

    if (definedForA)
        cout << "\"DEFINE_FOR_STATIC_A\" seen from foo()" << endl;

    #ifdef DEFINE_FOR_FOO
    bool definedForFoo = true;
    #else
    bool definedForFoo = false;
    #endif

    if (definedForFoo)
        cout << "\"DEFINE_FOR_FOO\" seen from foo()" << endl;
}

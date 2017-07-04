#include <iostream>
#include "foo.h"

void foo()
{
    using namespace std;
    cout << "in foo()" << endl;

    if (global_define_seen_at_foo_header)
        cout << "\"DEFINE_FOR_ALL\" seen from foo.h" << endl;
    else
        cout << "ERROR: \"DEFINE_FOR_ALL\" not seen from foo.h" << endl;

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

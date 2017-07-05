#include <iostream>
#include "foo.h"
#include "bar.h"
#include "staticA.h"
#include "usePthread.h"
#include "useMultipleLibs.h"

int main(int argc, char *argv[])
{
    using namespace std;
    cout << "in main()" << endl;
    #ifdef DEFINE_FOR_ALL
    cout << "\"DEFINE_FOR_ALL\" seen from main()" << endl;
    #else
    cout << "ERROR: \"DEFINE_FOR_ALL\" not seen from main()" << endl;
    #endif

    foo();
    bar();
    staticA();
    usePthread();
    useMultipleLibs();

    return 0;
}

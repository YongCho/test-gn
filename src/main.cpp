#include <iostream>
#include "foo.h"
#include "bar.h"
#include "staticA.h"
#include "usePthread.h"

int main(int argc, char *argv[])
{
    std::cout << "in main()" << std::endl;

    foo();
    bar();
    staticA();
    usePthread();

    return 0;
}

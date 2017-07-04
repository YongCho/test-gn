#include <iostream>
#include "foo.h"
#include "bar.h"

void bar()
{
    std::cout << "in bar()" << std::endl;
    std::cout << "foos: ";
    for (int i = 0; i < FOO; ++i)
    {
        std::cout << foos[i] << " ";
    }
    std::cout << std::endl;
} 

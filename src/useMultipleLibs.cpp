#include <iostream>
#include <pthread.h>
#include <boost/regex.hpp>
#include "useMultipleLibs.h"

void *useMultipleLibsThread(void *)
{
    std::cout << "In useMultipleLibsThread()" << std::endl;
    return NULL;
}

void useMultipleLibsRegex()
{
    std::cout << "In useMultipleLibsRegex()" << std::endl;
    const char *in = "0123";
    boost::regex expression("([0-9]+)");
    boost::cmatch what;
    if (boost::regex_match(in, what, expression))
    {
        std::cout << "Match: " << std::endl;
    }
}

void useMultipleLibs()
{
    std::cout << "In useMultipleLibs()" << std::endl;
    pthread_t t;
    pthread_create(&t, NULL, useMultipleLibsThread, NULL);
    pthread_join(t, NULL);
    useMultipleLibsRegex();
}

#include <iostream>
#include <pthread.h>
#include "usePthread.h"

void *callFromThread(void *)
{
    std::cout << "Launched by thread" << std::endl;
    return NULL;
}

void usePthread()
{
    std::cout << "In usePthread()" << std::endl;
    pthread_t t;
    pthread_create(&t, NULL, callFromThread, NULL);
    pthread_join(t, NULL);
}

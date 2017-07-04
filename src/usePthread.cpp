#include <iostream>
#include <pthread.h>

void *call_from_thread(void *)
{
    std::cout << "Launched by thread" << std::endl;
    return NULL;
}

void usePthread()
{
    std::cout << "In usePthread()" << std::endl;
    pthread_t t;
    pthread_create(&t, NULL, call_from_thread, NULL);
    pthread_join(t, NULL);
}

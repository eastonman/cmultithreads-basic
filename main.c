#include <stdio.h>
#include <pthread.h>

#define THREADS_NUM 12

void *workload()
{
    // Do silly stuff
    int a;
    for (;;)
    {
        a++;
    }
}

int main()
{
    pthread_t ids[THREADS_NUM];
    int i = 0;
    for (; i < THREADS_NUM; ++i)
    {
        int ret = pthread_create(&ids[i], NULL, workload, NULL);
        // For Debug
        printf("%d\n", ret);
    }

    pthread_exit(NULL);
    return 0;
}
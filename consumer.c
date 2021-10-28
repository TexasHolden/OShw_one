#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <semaphore.h>
#include <pthread.h>
#include "consumer-producer.h"
/*
int main(){
    printf("two");
    for(int i = 0; i < 5; i++) {
        pthread_create(&con, NULL, (void *)consumer, (void *)&a[i]);
    }
    for(int i = 0; i < 5; i++) {
        pthread_create(&con, NULL, (void *)consumer, (void *)&a[i]);
    }
}
*/

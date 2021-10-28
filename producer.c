#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/shm.h>
#include <sys/stat.h>
#include <sys/mman.h>
#include <semaphore.h>
#include <pthread.h>
#include "consumer-producer.h"


int main(){
    pthread_t pro,con;
    pthread_mutex_init(&mutex, NULL);
    sem_init(&empty,0,BufferSize);
    sem_init(&full,0,0);

    
        
    pthread_create(&pro, NULL, (void *)producer, NULL);
    pthread_create(&con, NULL, (void *)consumer, NULL);

    pthread_join(pro,NULL);
    pthread_join(con, NULL);



    pthread_mutex_destroy(&mutex);
    sem_destroy(&empty);
    sem_destroy(&full);

    return 0;
}

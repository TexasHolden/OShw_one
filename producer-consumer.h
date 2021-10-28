#include <pthread.h>
#include <semaphore.h>
#include <stdlib.h>
#include <stdio.h>
 
#define BufferSize 2

sem_t empty;
sem_t full;
int buffer[BufferSize];
pthread_mutex_t mutex;
pthread_t pro,con;
int a;
int loop = 20;

void *consumer(void *cno)
{   
    int consumed, total = 0;
    printf("Consumer Created\n");
    for(consumed = 0; consumed< loop; ++consumed) {

        sem_wait(&full);
        pthread_mutex_lock(&mutex);
        total = a;
        while(total != 0){
            --total;
            printf("Item consumed, %d remaining.\n", total);
        }
        pthread_mutex_unlock(&mutex);
        sem_post(&empty);
    }
}

void *producer(void *pno)
{   
    int produced;
    printf("Producer Created\n");
    for(produced = 0; produced<loop; ++produced) {
        
        int item = rand() % 2 + 1; 
        sem_wait(&empty);
        
        pthread_mutex_lock(&mutex);
        a = item;
        printf("Item produced, there are now %d item(s) in a table.\n",a);
        pthread_mutex_unlock(&mutex);
        sem_post(&full);
    }
    
}

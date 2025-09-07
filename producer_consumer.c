#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <pthread.h>
#include <semaphore.h>

#define SIZE 10

int buffer[SIZE];
int in = 0;
int out = 0;

sem_t empty;  // Semaphore to track empty slots
sem_t full;   // Semaphore to track full slots

void *producer(void *arg) {
    int id = *(int*)arg;
    while (1) {
        int item = rand() % 100;

        sem_wait(&empty);  // Wait for an empty slot
        buffer[in] = item; // Produce an item
        printf("Producer %d produced: %d\n", id, item);
        in = (in + 1) % SIZE;  // Move to the next position
        sem_post(&full);       // Signal that a new item is available

        sleep(1);  // Simulate production time
    }

    pthread_exit(NULL);
}

void *consumer(void *arg) {
    int id = *(int*)arg;
    while (1) {
        sem_wait(&full);       // Wait for a full slot
        int item = buffer[out]; // Consume an item
        printf("Consumer %d consumed: %d\n", id, item);
        out = (out + 1) % SIZE; // Move to the next position
        sem_post(&empty);       // Signal that an item has been consumed

        sleep(1);  // Simulate consumption time
    }

    pthread_exit(NULL);
}

int main() {
    pthread_t producerThread, consumerThread;
    int producerId = 1, consumerId = 1;

    sem_init(&empty, 0, SIZE); // Initialize empty slots semaphore
    sem_init(&full, 0, 0);     // Initialize full slots semaphore

    pthread_create(&producerThread, NULL, producer, &producerId);
    pthread_create(&consumerThread, NULL, consumer, &consumerId);

    pthread_join(producerThread, NULL);
    pthread_join(consumerThread, NULL);

    sem_destroy(&empty);  // Destroy semaphore
    sem_destroy(&full);   // Destroy semaphore

    return 0;
}

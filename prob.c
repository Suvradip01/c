#include <stdio.h>
#include <pthread.h>
#include <unistd.h>

#define SIZE 5

int Buffer[SIZE];  // Shared buffer
int in = 0;
int out = 0;
pthread_mutex_t mutex;  // Mutex to protect shared resources

// Producer function
void* producer(void* arg) {
    int items[] = {1, 2, 3}; // Example items
    int i = 0;
    while (1) {
        pthread_mutex_lock(&mutex);  // Lock the critical section
        if (in == SIZE) {
            in = 0;
        }
        Buffer[in] = items[i % 3]; // Cyclic assignment of items
        printf("Produced: %d at position %d\n", items[i % 3], in);
        in = (in + 1) % SIZE;
        i++;
        pthread_mutex_unlock(&mutex);  // Unlock the critical section
        sleep(1); // Simulate time taken for production
    }
}

// Consumer function
void* consumer(void* arg) {
    while (1) {
        pthread_mutex_lock(&mutex);  // Lock the critical section
        if (out == SIZE) {
            out = 0;
        }
        int item = Buffer[out];
        printf("Consumed: %d from position %d\n", item, out);
        out = (out + 1) % SIZE;
        pthread_mutex_unlock(&mutex);  // Unlock the critical section
        sleep(2); // Simulate time taken for consumption
    }
}

int main() {
    pthread_t producer_thread, consumer_thread;

    pthread_mutex_init(&mutex, NULL);  // Initialize the mutex

    // Create threads for producer and consumer
    pthread_create(&producer_thread, NULL, producer, NULL);
    pthread_create(&consumer_thread, NULL, consumer, NULL);

    // Wait for both threads to finish (infinite loop, so this won't happen)
    pthread_join(producer_thread, NULL);
    pthread_join(consumer_thread, NULL);

    pthread_mutex_destroy(&mutex);  // Destroy the mutex

    return 0;
}

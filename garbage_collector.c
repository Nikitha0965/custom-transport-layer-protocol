#include <stdio.h>
#include <unistd.h>

void *garbage_collector_thread(void *arg) {
    while (1) {
        printf("[GC] Cleaning acknowledged packets\n");
        sleep(5);
    }
    return NULL;
}
#include "ktp_internal.h"
#include <stdio.h>
#include <unistd.h>

void *receiver_thread(void *arg) {
    while (1) {
        printf("[Receiver] Waiting for packets...\n");
        sleep(2);
    }
    return NULL;
}
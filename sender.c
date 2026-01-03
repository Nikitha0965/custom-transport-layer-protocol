#include "ktp_internal.h"
#include <stdio.h>
#include <unistd.h>

void *sender_thread(void *arg) {
    sliding_window *window = (sliding_window *)arg;

    while (1) {
        if (window->head != window->tail) {
            printf("[Sender] Sending packet %u\n",
                   window->buffer[window->head].seq_no);
            sleep(1);
            window->head = (window->head + 1) % WINDOW_SIZE;
        }
    }
    return NULL;
}
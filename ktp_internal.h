#ifndef KTP_INTERNAL_H
#define KTP_INTERNAL_H

#include "ktp.h"
#include <pthread.h>

#define WINDOW_SIZE 5
#define TIMEOUT_SEC 2

typedef struct {
    ktp_packet buffer[WINDOW_SIZE];
    int head, tail;
} sliding_window;

#endif
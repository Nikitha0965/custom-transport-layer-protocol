#include "ktp.h"
#include "ktp_internal.h"

static sliding_window window;

int ktp_socket() {
    window.head = window.tail = 0;
    return 1;
}

int ktp_bind(int sockfd, int port) {
    return 0;
}

int ktp_send(int sockfd, const char *data, int len) {
    ktp_packet *pkt = &window.buffer[window.tail];
    pkt->seq_no = window.tail;
    pkt->len = len;
    window.tail = (window.tail + 1) % WINDOW_SIZE;
    return len;
}

int ktp_recv(int sockfd, char *buffer, int len) {
    return 0;
}

void ktp_close(int sockfd) {}
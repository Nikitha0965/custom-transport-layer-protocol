#ifndef KTP_H
#define KTP_H

#include <stdint.h>

#define KTP_MAX_DATA 1024

typedef struct {
    uint32_t seq_no;
    uint32_t ack_no;
    uint16_t len;
    char data[KTP_MAX_DATA];
} ktp_packet;

int ktp_socket();
int ktp_bind(int sockfd, int port);
int ktp_send(int sockfd, const char *data, int len);
int ktp_recv(int sockfd, char *buffer, int len);
void ktp_close(int sockfd);

#endif
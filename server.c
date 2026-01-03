#include "ktp.h"

int main() {
    int sock = ktp_socket();
    char buffer[1024];
    ktp_recv(sock, buffer, sizeof(buffer));
    return 0;
}
#include "ktp.h"
#include <string.h>

int main() {
    int sock = ktp_socket();
    ktp_send(sock, "Hello KTP", 9);
    return 0;
}
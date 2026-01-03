#include <sys/ipc.h>
#include <sys/shm.h>

int create_shared_memory(key_t key, size_t size) {
    return shmget(key, size, IPC_CREAT | 0666);
}

#include <sys/types.h>
#include <sys/mman.h>
#include <fcntl.h>

int main(int, char **) {
    shm_open("test", O_RDWR | O_CREAT | O_EXCL, 0666);
    shm_unlink("test");
    return 0;
}


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    int fd[2] = {0};
    printf("real fd: %lld\n", (long long) fd);
    pipe(fd);
    printf("%d %d\n", fd[0], fd[1]);
    return 0;
}

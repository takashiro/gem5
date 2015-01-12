#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/mount.h>

int main(){
    mount("/dev/sda13", "/mnt/Udisk", "vfat", 0, 0);
    return 0;
}

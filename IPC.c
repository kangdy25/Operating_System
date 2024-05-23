#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main() {
    int fd;
    char buf[5];
    
    fd = open("com.txt", 0_RDWR);
    
    write(fd, "Test", 5); // 하드디스크로 쓰기
    
    read(fd, buf, 5); // 하드디스크에서 읽기
    
    close(fd);
    
    exit(0);
}
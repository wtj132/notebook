//
// Created by 王天 on 2025/4/24.
//
#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <errno.h>
#include <_stdlib.h>
#include <iostream>
int main() {
    int fd = open("file.txt", O_RDWR);
    if (fd == -1) {
        perror("open");
        exit(1);
    }
    std::cout<<fd<<std::endl;
    int p = 3;
    char buf[100];
    ssize_t n = read(p,buf,100);
    std::cout<<n<<std::endl;
    for (int i=0;i<n;i++) {
        std::cout<<buf[i];
    }
    std::cout<<std::endl;

}
/*
3
41
dafj;asdkjf;aksjdf;kajsdfjhlajsdfhljkasdf
 */

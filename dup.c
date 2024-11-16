#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
int main(){
    int fd,fd1;
    fd=open("text.txt",O_RDONLY);
    printf("OLD file descriptor %d\n",fd);
    // fd1=dup(fd);
    // printf("New file  descr %d\n",fd1);
    fd1=dup2(fd,6);
    printf("New file  descr %d\n",fd1);


}
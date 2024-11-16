#include<unistd.h>
#include<fcntl.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<stdio.h>
int main()
{
    int n,fd,fd1;
    char buf[50];
   // fd=open("text.txt",O_RDONLY);
    n=read(0,buf,50);
    fd1=open("target",O_WRONLY|O_APPEND);
    write(fd1,buf,n);
}
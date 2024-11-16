#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdio.h>
#include<unistd.h>
int main(){
    // int n,f,f1,f2;
    // char bf[50];
    // f=open("target",O_RDWR);
    // read(f,bf,10);
    // write(1,bf,10);
    // f2=lseek(f,10,SEEK_CUR);
    // printf("\n pointer is at %d position\n",f2);
    // read(f,bf,10);
    // write(1,bf,10);
    int f,f1;
    char bf[50];
    f=open("target",O_RDWR);
    // f1=lseek(f,1,SEEK_SET);
    // printf("Pointer is at %d Position\n",f1);
    // read(f,bf,10);
    // write(1,bf,10);
    f1=lseek(f,-11,SEEK_END);
    read(f,bf,10);
    write(1,bf,10);
    printf("%d",f);
    
}
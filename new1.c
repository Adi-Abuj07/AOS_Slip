#include<unistd.h>
#include<stdio.h>
int main()
{
    int n;
    n= write(1,"Aditya",2);
    printf("\nvaule of n is%d\n",n);
}
/*
============================================================================
Name : 4.c
Author : Tanvi Kulkarni
Description : Write a program to open an existing file with read write mode. Try O_EXCL flag also.
Date: 8th Aug, 2024.
============================================================================
*/


#include <stdio.h>
#include <fcntl.h>

int main(void){
int rw,rw1,rw2;
rw = open("fruits",O_RDWR);
rw2 = open("fruits",O_RDWR|O_CREAT,0744);
rw1 = open("fruits",O_CREAT|O_EXCL,0744);
printf("%d,%d,%d\n",rw,rw2,rw1);

}

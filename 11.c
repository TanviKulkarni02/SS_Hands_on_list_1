/*
============================================================================
Name : 11.c
Author : Tanvi Kulkarni
Description : Write a program to open a file, duplicate the file descriptor and append the file with both the
descriptors and check whether the file is updated properly or not.
a. use dup
b. use dup2
c. use fcntl
Date: 12th Aug, 2024.
============================================================================
*/


#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

int main(void){

int fd1,fd2,fd3,fd4,fd5;
fd1 = open("file1" , O_RDWR);
fd2 = dup(fd1);
dup2(fd3,fd5);
fd4 = fcntl(fd1,F_DUPFD);
printf(  "fd1 =  %d\nfd2 = %d\nfd3 = %d\nfd4 = %d\n" , fd1,fd2,fd3,fd4);
sleep(25);

}

/*
============================================================================
Name : 10.c
Author : Tanvi Kulkarni
Description :  Write a program to open a file with read write mode, write 10 bytes, move the file pointer by 10
bytes (use lseek) and write again 10 bytes.
a. check the return value of lseek
b. open the file with od and check the empty spaces in between the data. 
Date: 12th Aug, 2024.
============================================================================
*/



#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>

int main(void){
int fd;
fd = open( "file1" , O_CREAT | O_RDWR,0744);
write (fd, "hi everybody" , 12);
lseek(fd,10L,SEEK_SET);
write( fd , "I am Tanvi Kulkarni",19);
close(fd);
}

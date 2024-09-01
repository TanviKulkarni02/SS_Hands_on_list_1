/*
============================================================================
Name : 13.c
Author : Tanvi Kulkarni
Description : Write a program to wait for a STDIN for 10 seconds using select. Write a proper print statement to
verify whether the data is available within 10 seconds or not (check in $man 2 select).
Date: 13th Aug, 2024.
============================================================================
*/

#include <stdio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdlib.h>
#include <sys/types.h>

int main(void){
fd_set fds1;
struct timeval tv;
int retval;

FD_ZERO(&fds1);
FD_SET(0,&fds1);

tv.tv_sec=10;
tv.tv_usec=0;
retval = select(1,&fds1,NULL,NULL,&tv);

if(retval)
printf ("Data is available in 10 seconds.....\n");
else
printf("Data is NOT available within 10 seconds....\n");

}

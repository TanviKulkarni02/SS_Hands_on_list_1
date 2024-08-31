/*
============================================================================
Name : 16a.c
Author : Tanvi Kulkarni
Description : Write a program to perform mandatory locking.
a. Implement write lock
Date: 27th Aug, 2024.
============================================================================
*/




#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <stdio.h>

int main()
{
struct  flock lock;
int fd;
fd= open("dtb",O_RDWR);
lock.l_type = F_WRLCK;
lock.l_whence = SEEK_SET;
lock.l_start = 0;
lock.l_len = 0;
lock.l_pid = getpid();
printf("Before entering criticial section..\n");
fcntl(fd,F_SETLKW,&lock);
printf("Inside critical section...\n");
printf("Enter to unlock..\n");
getchar();
printf("unlocked\n");
lock.l_type = F_UNLCK;
fcntl(fd,F_SETLK,&lock);
printf("finish\n");
}



/*
============================================================================
Name : 22.c
Author : Tanvi Kulkarni
Description : Write a program, open a file, call fork, and then write to the file by both the child as well as the
parent processes. Check output of the file. 
Date: 30th Aug, 2024.
============================================================================
*/


#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
int main()
{
int fd1;

fd1 = open("forkfile",O_RDWR);

int fk;

fk = fork();

if( !fk )
{
write (fd1, "this is being written by child process\n", 40);
}

else
{
write (fd1, "this is being written by parent process\n", 40); 
}

return 0;
}



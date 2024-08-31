/*
============================================================================
Name : 21.c
Author : Tanvi Kulkarni
Description : Write a program, call fork and print the parent and child process id. 
Date: 30th Aug, 2024.
============================================================================
*/


#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
int fk = fork();

if(!fk)
{

printf("The pid of child process : %d\n",getpid());

}

else{

printf("The pid of parent process : %d\n",getpid());
}

return 0;
}



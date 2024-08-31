/*
============================================================================
Name : 25.c
Author : Tanvi Kulkarni
Description : Write a program to create three child processes. The parent should wait for a particular child (use
waitpid system call). 
Date: 30th Aug, 2024.
============================================================================
*/




#include <stdio.h>
#include <unistd.h>
#include <sys/wait.h>

int main(void)
{
int i,j,k;

if(!(i=fork()))
sleep(1);

else if(!(j=fork()))
            sleep(5);

else if(!(k=fork()))
              sleep(10);
else  
   waitpid(j,NULL,0);
}

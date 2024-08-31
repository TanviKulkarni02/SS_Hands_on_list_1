/*
============================================================================
Name : 24.c
Author : Tanvi Kulkarni
Description : Write a program to create an orphan process. 
Date: 30th Aug, 2024.
============================================================================
*/




#include <stdio.h>
#include <stdlib.h>
#include <sys/stat.h>
#include <unistd.h>

int main()
{

int fk;

printf("I am parent process with pid :%d \n", getpid());

fk  = fork();


if(!fk)

{
printf("child is executing\n");
sleep(10);
printf("Now the pid of my parent is  : %d \n", getppid());
}

else
{
printf("parent executes and exits\n");
}

return 0;
}


/* output of porgram 24.c ->

I am parent process with pid :10775 
parent executes and exits
child is executing
tanvikulkarni@tanvikulkarni-Vostro-14-5401:~/ss$ Now the pid of my parent is  : 1600 

*/

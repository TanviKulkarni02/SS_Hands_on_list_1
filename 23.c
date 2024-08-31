/*
============================================================================
Name : 23.c
Author : Tanvi Kulkarni
Description : Write a program to create a Zombie state of the running program.
Date: 30th Aug, 2024.
============================================================================
*/



#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <fcntl.h>
#include <sys/stat.h>

int main(void)
{

int fk;

fk = fork();

if(!fk)
{

printf("Child is executing whose pid is : %d \n", getppid() ); //zombie process


}

else{

sleep(8); 
printf("Parent process fails to collect child process's exit status \n");

}




return 0;
}


/* Output of the program 23.c ->

Child is executing whose pid is : 10884 
Parent process fails to collect child process's exit status

*/

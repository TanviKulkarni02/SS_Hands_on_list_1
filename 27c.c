/*
============================================================================
Name : 27c.c
Author : Tanvi Kulkarni
Description : Write a program to execute ls -Rl by the following system calls 
c. execle
Date: 30th Aug, 2024.
============================================================================
*/




#include <stdio.h>
#include <unistd.h>

int main(void)
{

         execle("/bin/ls", "ls","-Rl" ,NULL);

}

/*
============================================================================
Name : 27a.c
Author : Tanvi Kulkarni
Description : Write a program to execute ls -Rl by the following system calls
a. execl
Date: 30th Aug, 2024.
============================================================================
*/



#include <stdio.h>
#include <unistd.h>

int main(void)
{

         execl("/bin/ls", "ls" , "-l" , "-a" , "-F" , NULL);

return 0;
}

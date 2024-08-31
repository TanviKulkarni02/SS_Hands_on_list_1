/*
============================================================================
Name : 6.c
Author : Tanvi Kulkarni
Description : Write a program to take input from STDIN and display on STDOUT. Use only read/write system calls 
Date : 11th Aug, 2024.
============================================================================
*/

#include <stdio.h>
#include <fcntl.h>
#include <unistd.h>

int main(void){

char buff[80];
read (0, buff, sizeof(buff));
write(1,buff,sizeof(buff));
}

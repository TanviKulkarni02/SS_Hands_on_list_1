/*
============================================================================
Name : 3.c
Author : Tanvi Kulkarni
Description :  Write a program to create a file and print the file descriptor value. Use creat ( ) system call 
Date: 8th Aug, 2024.
============================================================================
*/



#include <stdio.h>
#include <fcntl.h>
int main(void){
printf( "fd = %d\n",creat("file1",0744));

}

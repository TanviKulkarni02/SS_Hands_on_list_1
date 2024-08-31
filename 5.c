/*
============================================================================
Name : 5.c
Author : Tanvi Kulkarni
Description :  Write a program to create five new files with infinite loop. Execute the program in the background
and check the file descriptor table at /proc/pid/fd.
Date : 11th Aug, 2024.
============================================================================
*/

#include <stdio.h>
#include <fcntl.h>

int main(void){

int fl1,fl2,fl3,fl4,fl5;
fl1 = open( "f1" , O_RDWR | O_CREAT, 0767);
fl2 = open( "f2" , O_RDWR | O_CREAT, 0767);
fl3 = open( "f3" , O_RDWR | O_CREAT, 0767);
fl4 = open( "f4" , O_RDWR | O_CREAT, 0767);
fl5 = open( "f5" , O_RDWR | O_CREAT, 0767);


for(;;);

}

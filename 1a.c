/*
============================================================================
Name : 1a.c
Author : Tanvi Kulkarni
Description : 1. Create the following types of a files using (i) shell command (ii) system call
a. soft link (symlink system call)
Date: 8th Aug, 2024.
============================================================================
*/


#include<stdio.h>
#include<unistd.h>
int main(){
symlink("fruits","softlink");
}


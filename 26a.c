/*
============================================================================
Name : 26a.c
Author : Tanvi Kulkarni
Description : Write a program to execute an executable program.
a. use some executable program
Date: 31st Aug, 2024.
============================================================================
*/


#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(int arg, char* argv[]) {
        execv(argv[1], &argv[1]);
        return 0;
}


/*
============================================================================
Name : 26b.c
Author : Tanvi Kulkarni
Description :  Write a program to execute an executable program.
b. pass some input to an executable program. (for example execute an executable of $./a.out name)
Date: 31st Aug, 2024.
============================================================================
*/




#include <stdio.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <unistd.h>

int main(int arg, char *argv[]) {
        char *path = argv[1];
        argv++;
        execv(path, argv);
        return 0;
}

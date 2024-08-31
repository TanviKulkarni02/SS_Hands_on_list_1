/*
============================================================================
Name : 14.c
Author : Tanvi Kulkarni
Description : Write a program to find the type of a file.
a. Input should be taken from command line.
b. program should be able to identify any type of a file. 
Date: 21st Aug, 2024.
============================================================================
*/


#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include <sys/stat.h>
#include <sys/sysmacros.h>


       int main(int argc, char *argv[])
       {
           struct stat sb;
           lstat(argv[1],&sb);

           printf("File type:                ");

           switch (sb.st_mode & S_IFMT) {
           case S_IFBLK:  printf("block device\n");
                          break;
           case S_IFCHR:  printf("character device\n");
                          break;
           case S_IFDIR:  printf("directory\n");
                          break;
           case S_IFIFO:  printf("FIFO/pipe\n");
                          break;
           case S_IFLNK:  printf("symlink\n");
                          break;
           case S_IFREG:  printf("regular file\n");
                          break;
           case S_IFSOCK: printf("socket\n");
                          break;
           default:       printf("unknown?\n");
                          break;
           }


         
       }

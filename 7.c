/*
============================================================================
Name : 7.c
Author : Tanvi Kulkarni
Description : Write a program to copy file1 into file2 ($cp file1 file2). 
Date: 13th Aug, 2024.
============================================================================
*/


#include<stdlib.h>
#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main(int argc, char *argv[]){
if(argc!=3){
printf("what is wrong happening here");
return 0;
}
int fl_read;
int fl_write;

fl_read = open(argv[1],O_RDONLY);
fl_write = open(argv[2],O_WRONLY|O_CREAT|O_EXCL,777);

while(1){
char buff;
int ch_read = read(fl_read,&buff,1);
if(ch_read == 0)
break;
int ch_write = write(fl_write,&buff,1);
}
int x = close(fl_write);
int y = close(fl_read);
return 0 ;
}

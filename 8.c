/*
============================================================================
Name : 8.c
Author : Tanvi Kulkarni
Description :  Write a program to open a file in read only mode, read line by line and display each line as it is read.
Close the file when end of file is reached. 
Date: 11th Aug, 2024.
============================================================================
*/


#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main(void)
{
int fd,w;
char buff[1024];
fd = open("8_file",O_RDONLY);
while(read(fd,buff,1))
{
if(buff[0]== '\n')
getchar();
else
w=write(0,buff,1);

}
} 




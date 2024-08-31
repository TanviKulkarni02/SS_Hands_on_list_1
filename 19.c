/*
============================================================================
Name : 19.c
Author : Tanvi Kulkarni
Description : Write a program to find out time taken to execute getpid system call. Use time stamp counter. 
Date: 30th Aug, 2024.
============================================================================
*/




#include <stdio.h>
#include <sys/time.h>
#include <unistd.h>

unsigned long long rdtsc(){
 unsigned long long dst;
 __asm__ __volatile("rdtsc" :"=A" (dst));
}

int main()
{
int i,nanosec;
unsigned long long int start,end;
start = rdtsc();
for(i=0;i<=5000;i++)
getppid();
end = rdtsc();
nanosec = (end-start)/.27;
printf(" The function takes %d nano sec\n",nanosec);
}

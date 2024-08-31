/*
============================================================================
Name : 29.c
Author : Tanvi Kulkarni
Description :  Write a program to get scheduling policy and modify the scheduling policy (SCHED_FIFO,
SCHED_RR).
Date: 30th Aug, 2024.
============================================================================
*/







#include <stdio.h>
#include <sched.h>

int main()
{

pid_t pid = getpid();
printf("The scheduling policy is : %d \n", sched_getscheduler(pid));

printf("The scheduling policy is : %d \n", sched_setscheduler(pid));

printf("The modified scheduling policy now is : %d  \n" , sched_setscheduler(pid_t getpid()));

return 0;

}

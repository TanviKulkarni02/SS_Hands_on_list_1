/*
============================================================================
Name : 28.c
Author : Tanvi Kulkarni
Description :  Write a program to get maximum and minimum real time priority.
Date: 30th Aug, 2024.
============================================================================
*/


#include <stdio.h>
#include <sched.h>

int main(void)
{

printf("Round Robin priority - \n");
printf("Max priority : %d , Min priority : %d\n",  sched_get_priority_max(SCHED_RR) , sched_get_priority_min(SCHED_RR));
printf("FIFO priority - \n");
printf("Max priority : %d , Min priority : %d\n",  sched_get_priority_max(SCHED_FIFO) , sched_get_priority_min(SCHED_FIFO));
printf("Others priority - \n");
printf("Max priority : %d , Min priority : %d\n",  sched_get_priority_max(SCHED_OTHER) , sched_get_priority_min(SCHED_OTHER));
return 0;
}

/*
============================================================================
Name : 29.c
Author : Tanvi Kulkarni
Description :  Write a program to get scheduling policy and modify the scheduling policy (SCHED_FIFO,
SCHED_RR).
Date: 30th Aug, 2024.
============================================================================
*/







#include<unistd.h>
#include<stdio.h>
#include<sched.h>

int main(){
int choice,newpolicy;
int policy=sched_getscheduler(0);
struct sched_param s;

switch(policy)
{
	case SCHED_FIFO:
		printf("scheduling policy - FIFO\n");
		break;
	case SCHED_RR:
		printf("scheduling policy - Round Robin\n");
		break;
	case SCHED_OTHER:
		printf("scheduling policy - Other\n");
		break;
	default:
		break;
}

printf("choose scheduling policy :\n1.Round Robin\n2.FIFO\n3.Other\n");
printf("enter number :");
scanf("%d",&choice);
switch(choice)
{	case 1:
		s.sched_priority=1;
		sched_setscheduler(0,SCHED_RR,&s);
		break;
	case 2:
		 s.sched_priority=1;
                 sched_setscheduler(0,SCHED_FIFO,&s);
		 break;

	case 3:
		 s.sched_priority=0;
                sched_setscheduler(0,SCHED_OTHER,&s);
		break;
	default:
		printf("wrong choice\n");break;

}		

 newpolicy=sched_getscheduler(0);
switch(newpolicy)
{
        case SCHED_FIFO:
                printf("scheduling policy - FIFO\n");
                break;
        case SCHED_RR:
                printf("scheduling policy - Round Robin\n");
                break;
        case SCHED_OTHER:
                printf("scheduling policy - Other\n");
                break;
        default:
                break;
}
}

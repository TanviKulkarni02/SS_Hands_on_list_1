/*
============================================================================
Name : 20.c
Author : Tanvi Kulkarni
Description : Find out the priority of your running program. Modify the priority with nice command. 
Date: 30th Aug, 2024.
============================================================================
*/




#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <sys/resource.h>

int main()
{
pid_t pid = getpid();

int priority =  getpriority(PRIO_PROCESS , pid);
printf("Current Priority : %d\n" , priority);

int new_priority = nice(-15);

if(new_priority == -1){
perror("failed");
}
else{
printf("New priority after nice(-15): %d\n",getpriority(PRIO_PROCESS,pid));
}

while(1){
}

return 0;
}



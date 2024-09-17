#include <stdio.h>
#include <unistd.h>
#include <sys/time.h>
#include <signal.h>

void signalhandle(int sig)
{
printf("The timer value expired in 10 microsecond and 10 seconds  interval and signal number is %d\n",sig);

}

int main()
{
signal(SIGPROF,signalhandle);

struct timeval interval;
interval.tv_sec = 10;
interval.tv_usec = 10;

struct timeval value;
value.tv_usec = 10;
value.tv_usec = 10;

struct itimerval final;
final.it_interval = interval;
final.it_value = value;

int signaltimer =  setitimer(ITIMER_PROF,&final,NULL);
sleep(20);

while(1){}

}

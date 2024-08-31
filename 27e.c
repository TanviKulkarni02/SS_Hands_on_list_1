/*27. Write a program to execute ls -Rl by the following system calls
 e. execvp
 */ 


#include <stdio.h>
#include <unistd.h>

int main(void)
{

char *path = "ls";
char *argv[] = {path,"-Rl",NULL};
execvp(path,argv);

return 0;
}

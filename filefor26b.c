#include<stdio.h>
int main(int arg, char *argv[]) {
        printf("This is output for running program\n");
        for (int i=1; i<arg; i++) {
                printf("argument number is %d: %s\n", i, argv[i]);
        }
        return 0;
}

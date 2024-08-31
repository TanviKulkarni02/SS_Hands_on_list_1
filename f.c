#include <stdio.h>
#include <stdlib.h>
#include <sched.h>
#include <sys/types.h>
#include <unistd.h>

void print_policy(int policy) {
    switch (policy) {
        case SCHED_FIFO:
            printf("Current scheduling policy: SCHED_FIFO\n");
            break;
        case SCHED_RR:
            printf("Current scheduling policy: SCHED_RR\n");
            break;
        case SCHED_OTHER:
            printf("Current scheduling policy: SCHED_OTHER\n");
            break;
        default:
            printf("Unknown scheduling policy: %d\n", policy);
    }
}

int main() {
    int policy;
    struct sched_param param;

    // Get the current scheduling policy
    policy = sched_getscheduler(0); // 0 refers to the current process
    if (policy == -1) {
        perror("sched_getscheduler");
        exit(EXIT_FAILURE);
    }

    // Print the current scheduling policy
    printf("Before changing the policy:\n");
    print_policy(policy);

    // Set new scheduling policy to SCHED_FIFO
    param.sched_priority = 10; // Set the priority (valid for SCHED_FIFO and SCHED_RR)
    if (sched_setscheduler(0, SCHED_FIFO, &param) == -1) {
        perror("sched_setscheduler");
        exit(EXIT_FAILURE);
    }

    // Confirm the new scheduling policy
    policy = sched_getscheduler(0);
    if (policy == -1) {
        perror("sched_getscheduler");
        exit(EXIT_FAILURE);
    }

    printf("After setting new policy:\n");
    print_policy(policy);

    return 0;
}

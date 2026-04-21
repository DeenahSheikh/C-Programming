#include <stdio.h>

enum TaskStatus{
    PENDING,
    IN_PROGRESS,
    COMPLETED,
    CANCELLED
};

int main() {
    int status1, status2, status3;
    scanf("%d", &status1);
    scanf("%d", &status2);
    scanf("%d", &status3);
    
    enum TaskStatus task1;
    enum TaskStatus task2;
    enum TaskStatus task3;

    if (status1==0) task1= PENDING;
    else if (status1== 1) task1= IN_PROGRESS;
    else if (status1==2) task1= COMPLETED;
    else if (status1==3) task1= CANCELLED;

    if (status2==0) task2= PENDING;
    else if (status2== 1) task2= IN_PROGRESS;
    else if (status2==2) task2= COMPLETED;
    else if (status2==3) task2= CANCELLED;

    if (status3==0) task3= PENDING;
    else if (status3== 1) task3= IN_PROGRESS;
    else if (status3==2) task3= COMPLETED;
    else if (status3==3) task3= CANCELLED;

    printf("Task 1 status: %d\n", task1);
    printf("Task 2 status: %d\n", task2);
    printf("Task 3 status: %d\n", task3);
    
    int pendingcount=0;
    int inprogresscount=0;
    int completedcount=0;
    int cancelledcount=0;

    if (task1 == PENDING) pendingcount++;
    else if (task1 == IN_PROGRESS) inprogresscount++;
    else if (task1 == COMPLETED) completedcount++;
    else if (task1 == CANCELLED) cancelledcount++;
    
    if (task2 == PENDING) pendingcount++;
    else if (task2 == IN_PROGRESS) inprogresscount++;
    else if (task2 == COMPLETED) completedcount++;
    else if (task2 == CANCELLED) cancelledcount++;
    
    if (task3 == PENDING) pendingcount++;
    else if (task3 == IN_PROGRESS) inprogresscount++;
    else if (task3 == COMPLETED) completedcount++;
    else if (task3 == CANCELLED) cancelledcount++;

    printf("Pending tasks: %d\n", pendingcount);
    printf("In progress tasks: %d\n", inprogresscount);
    printf("Completed tasks: %d\n", completedcount);
    printf("Cancelled tasks: %d\n", cancelledcount);

    int activetasks = pendingcount + inprogresscount;
    printf("Active tasks: %d\n", activetasks);

    return 0;
}
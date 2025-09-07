#include <stdio.h>

struct Process {
    int pid;
    int arrivalTime;
    int burstTime;
    int waitingTime;
    int turnAroundTime;
};

void sortProcessesByArrivalTime(struct Process proc[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (proc[j].arrivalTime > proc[j + 1].arrivalTime) {
                struct Process temp = proc[j];
                proc[j] = proc[j + 1];
                proc[j + 1] = temp;
            }
        }
    }
}

void calculateWaitingTime(struct Process proc[], int n) {
    proc[0].waitingTime = 0;
    for (int i = 1; i < n; i++) {
        proc[i].waitingTime = proc[i - 1].waitingTime + proc[i - 1].burstTime;
    }
}

void calculateTurnAroundTime(struct Process proc[], int n) {
    for (int i = 0; i < n; i++) {
        proc[i].turnAroundTime = proc[i].waitingTime + proc[i].burstTime;
    }
}

void displayProcessDetails(struct Process proc[], int n) {
    float totalWaitingTime = 0.0;
    float totalTurnAroundTime = 0.0;
    
    printf("PID\tBurst Time\tWaiting Time\tTurn Around Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\n", proc[i].pid, proc[i].burstTime, proc[i].waitingTime, proc[i].turnAroundTime);
        totalWaitingTime += proc[i].waitingTime;
        totalTurnAroundTime += proc[i].turnAroundTime;
    }
    printf("Average Waiting Time = %.2f\n", totalWaitingTime / n);
    printf("Average Turn Around Time = %.2f\n", totalTurnAroundTime / n);
}

int main() {
    int n;
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    
    struct Process proc[n];
    
    for (int i = 0; i < n; i++) {
        proc[i].pid = i + 1;
        printf("Enter Burst Time for process %d: ", proc[i].pid);
        scanf("%d", &proc[i].burstTime);
        printf("Enter Arrival Time for process %d: ", proc[i].pid);
        scanf("%d", &proc[i].arrivalTime);
    }
    
    sortProcessesByArrivalTime(proc, n);
    calculateWaitingTime(proc, n);
    calculateTurnAroundTime(proc, n);
    displayProcessDetails(proc, n);
    
    return 0;
}

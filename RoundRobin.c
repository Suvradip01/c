#include <stdio.h>

// Structure to represent a process
struct Process {
    int pid;         // Process ID
    int burstTime;   // Burst Time
    int remainingTime; // Remaining Time
    int waitingTime; // Waiting Time
    int turnAroundTime; // Turn Around Time
};

// Function to calculate waiting time and turn around time using Round Robin
void calculateTimes(struct Process proc[], int n, int quantum) {
    int currentTime = 0;
    int completed = 0;

    // Initialize remaining times
    for (int i = 0; i < n; i++) {
        proc[i].remainingTime = proc[i].burstTime;
        proc[i].waitingTime = 0;  // Set initial waiting time to 0
    }

    // Round Robin scheduling
    while (completed != n) {
        for (int i = 0; i < n; i++) {
            if (proc[i].remainingTime > 0) {
                if (proc[i].remainingTime > quantum) {
                    currentTime += quantum;
                    proc[i].remainingTime -= quantum;
                } else {
                    currentTime += proc[i].remainingTime;
                    proc[i].waitingTime = currentTime - proc[i].burstTime;
                    proc[i].remainingTime = 0;
                    completed++;
                }
            }
        }
    }

    // Calculate turn around time for each process
    for (int i = 0; i < n; i++) {
        proc[i].turnAroundTime = proc[i].waitingTime + proc[i].burstTime;
    }
}

// Function to display the processes along with their waiting and turn around times
void displayProcessDetails(struct Process proc[], int n) {
    printf("PID\tBurst Time\tWaiting Time\tTurn Around Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\n", proc[i].pid, proc[i].burstTime, proc[i].waitingTime, proc[i].turnAroundTime);
    }
}

int main() {
    int n, quantum;
    
    // Input number of processes and time quantum
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    printf("Enter time quantum: ");
    scanf("%d", &quantum);
    
    // Declare array of processes
    struct Process proc[n];
    
    // Input burst time for each process
    for (int i = 0; i < n; i++) {
        proc[i].pid = i + 1;  // Process IDs start from 1
        printf("Enter burst time for process %d: ", proc[i].pid);
        scanf("%d", &proc[i].burstTime);
    }
    
    // Calculate waiting time and turn around time using Round Robin
    calculateTimes(proc, n, quantum);
    
    // Display process details
    displayProcessDetails(proc, n);
    
    return 0;
}

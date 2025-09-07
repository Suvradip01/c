#include <stdio.h>

// Structure to represent a process
struct Process {
    int pid;        // Process ID
    int burstTime;  // Burst Time
    int priority;   // Priority
    int waitingTime;  // Waiting Time
    int turnAroundTime;  // Turn Around Time
};

// Function to sort processes according to their priority
void sortProcessesByPriority(struct Process proc[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (proc[j].priority > proc[j + 1].priority) {
                // Swap processes
                struct Process temp = proc[j];
                proc[j] = proc[j + 1];
                proc[j + 1] = temp;
            }
        }
    }
}

// Function to calculate waiting time for each process
void calculateWaitingTime(struct Process proc[], int n) {
    proc[0].waitingTime = 0;  // First process has 0 waiting time
    for (int i = 1; i < n; i++) {
        proc[i].waitingTime = proc[i - 1].waitingTime + proc[i - 1].burstTime;
    }
}

// Function to calculate turn around time for each process
void calculateTurnAroundTime(struct Process proc[], int n) {
    for (int i = 0; i < n; i++) {
        proc[i].turnAroundTime = proc[i].waitingTime + proc[i].burstTime;
    }
}

// Function to display the processes along with their waiting and turn around times
void displayProcessDetails(struct Process proc[], int n) {
    printf("PID\tBurst Time\tPriority\tWaiting Time\tTurn Around Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", proc[i].pid, proc[i].burstTime, proc[i].priority, proc[i].waitingTime, proc[i].turnAroundTime);
    }
}

int main() {
    int n;
    
    // Input number of processes
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    
    // Declare array of processes
    struct Process proc[n];
    
    // Input burst time and priority for each process
    for (int i = 0; i < n; i++) {
        proc[i].pid = i + 1;  // Process IDs start from 1
        printf("Enter burst time for process %d: ", proc[i].pid);
        scanf("%d", &proc[i].burstTime);
        printf("Enter priority for process %d (lower number means higher priority): ", proc[i].pid);
        scanf("%d", &proc[i].priority);
    }
    
    // Sort processes by priority
    sortProcessesByPriority(proc, n);
    
    // Calculate waiting time and turn around time
    calculateWaitingTime(proc, n);
    calculateTurnAroundTime(proc, n);
    
    // Display process details
    displayProcessDetails(proc, n);
    
    return 0;
}

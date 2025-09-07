#include <stdio.h>

// Structure to represent a process
struct Process {
    int pid;           // Process ID
    int burstTime;     // Burst Time
    int arrivalTime;   // Arrival Time
    int remainingTime; // Remaining Time (used for SRTF)
    int waitingTime;   // Waiting Time
    int turnAroundTime;// Turn Around Time
    int isCompleted;   // Completion status
};

// Function to calculate waiting time and turn around time using SRTF
void calculateTimes(struct Process proc[], int n) {
    int currentTime = 0;
    int completed = 0;
    int shortest = -1;
    int minRemainingTime = 10000;  // Manually setting a large number instead of using INT_MAX (e.g., 10000)

    // Initialize remaining times and completion status
    for (int i = 0; i < n; i++) {
        proc[i].remainingTime = proc[i].burstTime;
        proc[i].isCompleted = 0;
    }

    // Run until all processes are completed
    while (completed != n) {
        // Find the process with the shortest remaining time that has arrived
        for (int i = 0; i < n; i++) {
            if (proc[i].arrivalTime <= currentTime && !proc[i].isCompleted && proc[i].remainingTime < minRemainingTime) {
                minRemainingTime = proc[i].remainingTime;
                shortest = i;
            }
        }
        
        if (shortest == -1) {  // No process available to run at the current time
            currentTime++;
            continue;
        }
        
        // Process the selected process (shortest remaining time)
        proc[shortest].remainingTime--;
        currentTime++;
        
        // If the process is completed
        if (proc[shortest].remainingTime == 0) {
            proc[shortest].isCompleted = 1;
            completed++;
            minRemainingTime = 10000;  // Reset minRemainingTime for next process
            proc[shortest].turnAroundTime = currentTime - proc[shortest].arrivalTime;
            proc[shortest].waitingTime = proc[shortest].turnAroundTime - proc[shortest].burstTime;
        }
    }
}

// Function to display the processes along with their waiting and turn around times
void displayProcessDetails(struct Process proc[], int n) {
    printf("PID\tBurst Time\tArrival Time\tWaiting Time\tTurn Around Time\n");
    for (int i = 0; i < n; i++) {
        printf("%d\t%d\t\t%d\t\t%d\t\t%d\n", proc[i].pid, proc[i].burstTime, proc[i].arrivalTime, proc[i].waitingTime, proc[i].turnAroundTime);
    }
}

int main() {
    int n;
    
    // Input number of processes
    printf("Enter the number of processes: ");
    scanf("%d", &n);
    
    // Declare array of processes
    struct Process proc[n];
    
    // Input burst time and arrival time for each process
    for (int i = 0; i < n; i++) {
        proc[i].pid = i + 1;  // Process IDs start from 1
        printf("Enter burst time for process %d: ", proc[i].pid);
        scanf("%d", &proc[i].burstTime);
        printf("Enter arrival time for process %d: ", proc[i].pid);
        scanf("%d", &proc[i].arrivalTime);
    }
    
    // Calculate waiting time and turn around time using SRTF
    calculateTimes(proc, n);
    
    // Display process details
    displayProcessDetails(proc, n);
    
    return 0;
}

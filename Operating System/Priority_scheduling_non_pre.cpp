#include <iostream>
using namespace std;
const int MAX_PRIORITY = 100000;

struct Process
{
    int id;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int turnaroundTime;
    int waitingTime;
    int responseTime;
    int priority;
};

void priorityScheduling(Process processes[], int n)
{
    int currentTime = 0;
    int completed = 0;

    while (completed < n)
    {
        int highestPriority = MAX_PRIORITY;
        int highestPriorityIndex = -1;

        for (int i = 0; i < n; ++i)
        {
            if (processes[i].arrivalTime <= currentTime && processes[i].burstTime > 0)
            {
                if (processes[i].priority < highestPriority)
                {
                    highestPriority = processes[i].priority;
                    highestPriorityIndex = i;
                }
            }
        }

        if (highestPriorityIndex != -1)
        {
            processes[highestPriorityIndex].responseTime = currentTime - processes[highestPriorityIndex].arrivalTime;
            processes[highestPriorityIndex].completionTime = currentTime + processes[highestPriorityIndex].burstTime;
            processes[highestPriorityIndex].turnaroundTime = processes[highestPriorityIndex].completionTime - processes[highestPriorityIndex].arrivalTime;
            processes[highestPriorityIndex].waitingTime = processes[highestPriorityIndex].turnaroundTime - processes[highestPriorityIndex].burstTime;

            currentTime = processes[highestPriorityIndex].completionTime;
            processes[highestPriorityIndex].burstTime = 0;
            completed++;
        }
        else
        {
            currentTime++;
        }
    }
}

int main()
{
    int n;
    cout << "Enter the number of processes: ";
    cin >> n;

    Process processes[n];
    for (int i = 0; i < n; ++i)
    {
        processes[i].id = i;
        cout << "Enter arrival time for process " << i << ": ";
        cin >> processes[i].arrivalTime;
        cout << "Enter burst time for process " << i << ": ";
        cin >> processes[i].burstTime;
        cout << "Enter priority for process " << i << ": ";
        cin >> processes[i].priority;
    }
    int bt[n];
    for (int i = 0; i < n; i++)
    {
        bt[i] = processes[i].burstTime;
    }
    priorityScheduling(processes, n);

    cout << "Process\tArrival\tBurst\tCompletion\tTurnaround\tWaiting\tResponse\tPriority\n";
    for (int i = 0; i < n; ++i)
    {
        cout << processes[i].id << "\t" << processes[i].arrivalTime << "\t" << bt[i] << "\t"
             << processes[i].completionTime << "\t\t" << processes[i].turnaroundTime << "\t\t"
             << processes[i].waitingTime << "\t" << processes[i].responseTime << "\t" << processes[i].priority << "\n";
    }

    return 0;
}

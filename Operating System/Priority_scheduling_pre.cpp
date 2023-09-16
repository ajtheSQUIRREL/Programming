#include <iostream>
#include <algorithm>
using namespace std;

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

bool compareArrivalTime(const Process &a, const Process &b)
{
    return a.arrivalTime < b.arrivalTime;
}

bool comparePriority(const Process &a, const Process &b)
{
    return a.priority < b.priority;
}

void priorityPreemptiveScheduling(Process processes[], int n)
{
    int currentTime = 0;
    int completed = 0;

    while (completed < n)
    {
        sort(processes, processes + n, comparePriority);

        int nextProcess = -1;
        for (int i = 0; i < n; ++i)
        {
            if (processes[i].arrivalTime <= currentTime && processes[i].burstTime > 0)
            {
                nextProcess = i;
                break;
            }
        }

        if (nextProcess != -1)
        {
            processes[nextProcess].responseTime = currentTime - processes[nextProcess].arrivalTime;
            processes[nextProcess].burstTime--;
            currentTime++;

            if (processes[nextProcess].burstTime == 0)
            {
                processes[nextProcess].completionTime = currentTime;
                processes[nextProcess].turnaroundTime = processes[nextProcess].completionTime - processes[nextProcess].arrivalTime;
                processes[nextProcess].waitingTime = processes[nextProcess].turnaroundTime - processes[nextProcess].burstTime;
                completed++;
            }
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
    priorityPreemptiveScheduling(processes, n);

    double totalWaitingTime = 0;
    float avgTAT = 0;
    cout << "Process\tArrival\tBurst\tCompletion\tTurnaround\tWaiting\tResponse\tPriority\n";
    for (int i = 0; i < n; ++i)
    {
        totalWaitingTime += processes[i].waitingTime;
        avgTAT += processes[i].turnaroundTime;
        cout << processes[i].id << "\t" << processes[i].arrivalTime << "\t" << bt[i] << "\t"
             << processes[i].completionTime << "\t\t" << processes[i].turnaroundTime << "\t\t"
             << processes[i].waitingTime << "\t" << processes[i].responseTime << "\t" << processes[i].priority << "\n";
    }

    cout << "Average Waiting Time: " << totalWaitingTime / n << endl;
    cout << "Averrage Turn Around Time: " << avgTAT / n << endl;
    return 0;
}

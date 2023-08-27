#include <iostream>
using namespace std;
const int MAX = 100000;

struct Process
{
    int id;
    int arrivalTime;
    int burstTime;
    int completionTime;
    int turnaroundTime;
    int waitingTime;
    int responseTime;
};

void sjfScheduling(Process processes[], int n)
{
    int currentTime = 0;
    int completed = 0;

    while (completed < n)
    {
        int shortestJobIndex = -1;
        int shortestJobBurst = MAX;

        for (int i = 0; i < n; ++i)
        {
            if (processes[i].arrivalTime <= currentTime && processes[i].burstTime > 0)
            {
                if (processes[i].burstTime < shortestJobBurst)
                {
                    shortestJobBurst = processes[i].burstTime;
                    shortestJobIndex = i;
                }
            }
        }

        if (shortestJobIndex != -1)
        {
            processes[shortestJobIndex].responseTime = currentTime - processes[shortestJobIndex].arrivalTime;
            processes[shortestJobIndex].completionTime = currentTime + processes[shortestJobIndex].burstTime;
            processes[shortestJobIndex].turnaroundTime = processes[shortestJobIndex].completionTime - processes[shortestJobIndex].arrivalTime;
            processes[shortestJobIndex].waitingTime = processes[shortestJobIndex].turnaroundTime - processes[shortestJobIndex].burstTime;

            currentTime = processes[shortestJobIndex].completionTime;
            processes[shortestJobIndex].burstTime = 0;
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
        cout << "Enter arrival time for process " << i + 1 << ": ";
        cin >> processes[i].arrivalTime;
        cout << "Enter burst time for process " << i + 1 << ": ";
        cin >> processes[i].burstTime;
    }
    int bt[n];
    for (int i = 0; i < n; i++)
    {
        bt[i] = processes[i].burstTime;
    }
    sjfScheduling(processes, n);

    cout << "Process\tArrival\tBurst\tCompletion\tTurnaround\tWaiting\tResponse\n";
    for (int i = 0; i < n; ++i)
    {
        cout << processes[i].id << "\t" << processes[i].arrivalTime << "\t" << bt[i] << "\t"
             << processes[i].completionTime << "\t\t" << processes[i].turnaroundTime << "\t\t"
             << processes[i].waitingTime << "\t" << processes[i].responseTime << "\n";
    }

    return 0;
}

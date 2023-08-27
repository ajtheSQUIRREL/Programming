#include <iostream>
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
};

void fcfsScheduling(Process processes[], int n)
{
    int currentTime = 0;

    for (int i = 0; i < n; ++i)
    {
        if (currentTime < processes[i].arrivalTime)
        {
            currentTime = processes[i].arrivalTime;
        }

        processes[i].responseTime = currentTime - processes[i].arrivalTime;
        processes[i].completionTime = currentTime + processes[i].burstTime;
        processes[i].turnaroundTime = processes[i].completionTime - processes[i].arrivalTime;
        processes[i].waitingTime = processes[i].turnaroundTime - processes[i].burstTime;

        currentTime = processes[i].completionTime;
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

    fcfsScheduling(processes, n);

    cout << "Process\tArrival\tBurst\tCompletion\tTurnaround\tWaiting\tResponse\n";
    for (int i = 0; i < n; ++i)
    {
        cout << processes[i].id << "\t" << processes[i].arrivalTime << "\t" << processes[i].burstTime << "\t"
             << processes[i].completionTime << "\t\t" << processes[i].turnaroundTime << "\t\t"
             << processes[i].waitingTime << "\t" << processes[i].responseTime << "\n";
    }

    return 0;
}

#include <iostream>
using namespace std;
struct Process
{
    int id;
    int arrivalTime;
    int burstTime;
    int remainingTime;
    int completionTime;
    int turnaroundTime;
    int waitingTime;
    int responseTime;
};

void sjfPreemptiveScheduling(Process processes[], int n)
{
    int currentTime = 0;
    int completed = 0;

    while (completed < n)
    {
        int shortestRemainingTime = -1;
        int selectedProcess = -1;

        for (int i = 0; i < n; ++i)
        {
            if (processes[i].arrivalTime <= currentTime && processes[i].remainingTime > 0)
            {
                if (shortestRemainingTime == -1 || processes[i].remainingTime < shortestRemainingTime)
                {
                    shortestRemainingTime = processes[i].remainingTime;
                    selectedProcess = i;
                }
            }
        }

        if (selectedProcess != -1)
        {
            if (processes[selectedProcess].responseTime == -1)
            {
                processes[selectedProcess].responseTime = currentTime - processes[selectedProcess].arrivalTime;
            }

            cout << "Executing process " << selectedProcess << " at time " << currentTime << endl;
            processes[selectedProcess].remainingTime--;

            if (processes[selectedProcess].remainingTime == 0)
            {
                processes[selectedProcess].completionTime = currentTime + 1;
                processes[selectedProcess].turnaroundTime = processes[selectedProcess].completionTime - processes[selectedProcess].arrivalTime;
                processes[selectedProcess].waitingTime = processes[selectedProcess].turnaroundTime - processes[selectedProcess].burstTime;
                completed++;
            }
        }

        currentTime++;
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
        processes[i].remainingTime = processes[i].burstTime;
        processes[i].completionTime = 0;
        processes[i].turnaroundTime = 0;
        processes[i].waitingTime = 0;
        processes[i].responseTime = -1;
    }

    sjfPreemptiveScheduling(processes, n);

    cout << "Process\tArrival\tBurst\tCompletion\tTurnaround\tWaiting\tResponse\n";
    float avgTAT = 0;
    float avgWT = 0;

    for (int i = 0; i < n; ++i)
    {
        cout << processes[i].id << "\t" << processes[i].arrivalTime << "\t" << processes[i].burstTime << "\t"
             << processes[i].completionTime << "\t\t" << processes[i].turnaroundTime << "\t\t"
             << processes[i].waitingTime << "\t" << processes[i].responseTime << "\n";
        avgTAT += processes[i].turnaroundTime;
        avgWT += processes[i].waitingTime;
    }

    avgTAT /= n;
    avgWT /= n;
    cout << endl;
    cout << "Average Turnaround Time: " << avgTAT << endl;
    cout << "Average Waiting Time: " << avgWT << endl;
    return 0;
}

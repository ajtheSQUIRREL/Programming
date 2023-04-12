#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        int min = 0;
        int minPos;
        for (int k = 0; k < n; k++)
        {
            cin >> arr[k];
            if (arr[k] <= min)
            {
                min = arr[k];
                minPos = k;
            }
        }
        int pos;
        // cout << minPos << endl;
        if (minPos - 1 >= 0 && minPos + 1 < n)
        {
            if (arr[minPos + 1] >= arr[minPos - 1])
                pos = minPos - 1;
            else
                pos = minPos + 1;
        }
        else if (minPos - 1 < 0)
            pos = minPos + 1;
        else if (minPos + 1 >= n)
            pos = minPos - 1;
        // cout << pos << endl;
        arr[minPos] = arr[minPos] * -1;
        arr[pos] = arr[pos] * -1;
        int sum = 0;
        for (int i = 0; i < n; i++)
        {
            sum += arr[i];
        }
        cout << sum << endl;
    }
}
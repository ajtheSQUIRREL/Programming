#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int arr[n][n];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }
    int total = 0;
    int mid = (n - 1) / 2;
    for (int i = 0; i < n; i++)
    {
        total += arr[i][mid];
        total += arr[mid][i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i < mid || i == n - 1)
            total += arr[0][i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i > mid || i == 0)
            total += arr[n - 1][i];
    }
    for (int i = 0; i < n; i++)
    {
        if (i > mid || i == 0)
            total += arr[i][0];
    }
    for (int i = 0; i < n; i++)
    {
        if (i < mid || i == n - 1)
            total += arr[i][n - 1];
    }
    cout << total - arr[mid][mid] - arr[0][0] - arr[0][n - 1] - arr[n - 1][0] - arr[n - 1][n - 1];
}
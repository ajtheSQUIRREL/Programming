#include <bits/stdc++.h>
using namespace std;
int main()
{
    int m;
    cin >> m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin >> arr[i];
    }
    int n;
    cin >> n;
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr2[i];
    }
    for (int i = 0; i < m; i++)
    {
        int flag = 1;
        for (int j = 0; j < n; j++)
        {
            if (arr[i] == arr2[j])
            {
                flag = 0;
                break;
            }
        }
        if (flag)
            cout << arr[i] << " ";
    }
}
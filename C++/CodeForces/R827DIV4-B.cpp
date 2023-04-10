#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, flag = 0;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int max = *max_element(arr, arr + n);
        int count[max + 1] = {0};
        for (int i = 0; i <= n; i++)
        {
            count[arr[i]]++;
        }
        for (int i = 0; i <= max; i++)
        {
            cout<<count[i]
        }
        if (flag)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
        
    }
}
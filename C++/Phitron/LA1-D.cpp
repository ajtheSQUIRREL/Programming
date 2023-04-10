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
        int count[1001] = {0};
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            count[arr[i]]++;
        }
        int max = count[0];
        for (int i = 1; i < 1001; i++)
        {
            if (count[i] > max)
                max = count[i];
        }
        // int mx = *max_element(count, count + 1000);

        cout << n - max << endl;
    }
}
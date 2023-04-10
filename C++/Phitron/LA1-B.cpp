#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        getchar();
        int m, n;
        cin >> m >> n;
        int arr[m];
        for (int c = 0; c < m; c++)
        {
            cin >> arr[c];
        }
        cout << "Case " << i + 1 << ":" << endl;
        for (int j = 0; j < n; j++)
        {
            int p, q;
            cin >> p >> q;
            p -= 1;
            q -= 1;
            int minimum = arr[p];
            for (int k = p; k < q; p++, k++)
            {
                minimum = min(arr[p + 1], arr[p]);
            }
            cout << minimum << endl;
        }
    }
}
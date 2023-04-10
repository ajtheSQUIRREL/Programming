#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, q;
        cin >> n >> q;
        int arr[n];
        for (int c = 0; c < n; c++)
        {
            cin >> arr[c];
        }
        cout << "Case " << i + 1 << ":" << endl;
        for (int j = 0; j < q; j++)
        {
            int x;
            cin >> x;
            if (x == 1)
            {
                int y;
                cin >> y;
                cout << arr[y] << endl;
                arr[y] = 0;
            }
            else if (x == 2)
            {
                int f, g;
                cin >> f >> g;
                arr[f] += g;
            }
            else if (x == 3)
            {
                int o, p;
                cin >> o >> p;
                int total = 0;
                for (; o <= p; o++)
                {
                    total += arr[o];
                }
                cout << total << endl;
            }
        }
    }
}
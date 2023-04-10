#include <bits/stdc++.h>

using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int arr[m][n];
    int x = m * n;
    int chk[x] = {0};
    int pos = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
            int flag = 1;
            for (int q = 0; q < x; q++)
            {
                if (arr[i][j] == chk[q])
                {
                    arr[i][j] = -1;
                    flag = 0;
                    break;
                }
            }
            if (flag)
            {
                chk[pos] = arr[i][j];
                pos++;
            }
        }
    }
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
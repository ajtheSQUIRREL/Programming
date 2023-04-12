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
        string str;
        cin >> str;
        int x, y;
        for (x = 0, y = n - 1; x <= y; x++, y--)
        {
            if (str[x] == str[y])
                break;
        }
        cout << y - x + 1 << endl;
    }
}
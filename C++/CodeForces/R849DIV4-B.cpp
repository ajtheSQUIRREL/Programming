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
        int x = 0, y = 0, flag = 1;
        for (auto i : str)
        {
            if (i == 'L')
            {
                x -= 1;
                if (x == 1 && y == 1)
                {
                    cout << "YES" << endl;
                    flag = 0;
                    break;
                }
            }
            else if (i == 'R')
            {
                x += 1;
                if (x == 1 && y == 1)
                {
                    cout << "YES" << endl;
                    flag = 0;
                    break;
                }
            }
            else if (i == 'U')
            {
                y += 1;
                if (x == 1 && y == 1)
                {
                    cout << "YES" << endl;
                    flag = 0;
                    break;
                }
            }
            else if (i == 'D')
            {
                y -= 1;
                if (x == 1 && y == 1)
                {
                    cout << "YES" << endl;
                    flag = 0;
                    break;
                }
            }
        }
        if (flag)
        {
            cout << "NO" << endl;
        }
    }
}
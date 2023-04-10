#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    for (int x = 0; x < t; x++)
    {
        int day;
        cin >> day;
        int earn[day], spend[day];
        for (int i = 0; i < day; i++)
        {
            cin >> earn[i];
        }
        for (int i = 0; i < day; i++)
        {
            cin >> spend[i];
        }
        int query;
        cin >> query;
        for (int i = 0; i < query; i++)
        {
            int chk;
            cin >> chk;
            int total = 0;
            for (int j = 0; j <= chk; j++)
            {
                total += earn[j] - spend[j];
            }
            if (total < 0)
                cout << "0"
                     << " ";
            else
                cout << "1"
                     << " ";
        }
        cout << endl;
    }
}
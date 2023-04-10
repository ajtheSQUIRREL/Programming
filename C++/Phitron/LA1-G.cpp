#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x, rev = 0, rem;
    cin >> x;
    int y = x;
    while (y > 0)
    {
        rem = y % 10;
        rev = rev * 10 + rem;
        y /= 10;
    }
    if (rev == x)
        cout << "Yes";
    else
        cout << "No";
}
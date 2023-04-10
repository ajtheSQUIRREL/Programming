#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b, c, count[101] = {0}, x = 0;
    cin >> a >> b >> c;
    count[a]++;
    count[b]++;
    count[c]++;
    for (int i = 1; i <= 100; i++)
    {
        if (count[i] > 0)
            x++;
    }
    cout << x;
}
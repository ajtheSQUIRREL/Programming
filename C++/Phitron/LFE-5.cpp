#include <bits/stdc++.h>
// Tree_Plant
using namespace std;

int main()
{
    int y;
    cin >> y;
    if (y == 1 || y == 2)
    {
        cout << y << endl;
        return 0;
    }

    int x = 1;

    for (int i = 3; i <= y; i++)
    {
        x *= 2;
    }
    int z = 2 * x * x;
    cout << z << endl;
    return 0;
}
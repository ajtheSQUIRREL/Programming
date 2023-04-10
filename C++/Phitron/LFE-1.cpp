#include <bits/stdc++.h>

using namespace std;
// Whate_Walkers_And_Candies
int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, c;
        cin >> n >> c;
        vector<int> V;
        for (int j = 0; j < n; j++)
        {
            int x;
            cin >> x;
            V.push_back(x);
        }
        for (int k = 0; k < n; k++)
        {
            c -= (2 * V.at(k));
            if (c < 0)
            {
                cout << "No" << endl;
                break;
            }
        }
        if (c >= 0)
        {
            cout << "Yes" << endl;
        }
    }
}
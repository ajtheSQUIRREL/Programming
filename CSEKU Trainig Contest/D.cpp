#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, k;
    cin >> n;
    int price[1001];
    int page[1001];
    for (int i = 0; i < n; i++)
    {
        cin >> price[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin >> page[i];
    }
    int total[n];
    for (int i = 0; i < n; i++)
    {
        int k1 = k;
        int p = 0;
        p += page[i];
        k1 -= price[i];
        for (int j = i + 1; j < n; j++)
        {
            if (k1 > price[j])
            {
                p += page[j];
                k1 -= price[j];
            }
        }
        total[i] = p;
    }
    int max = total[0];
    for (int i = 0; i < n; i++)
    {
        if (total[i] > max)
        {
            max = total[i];
        }
    }
    printf("%d", max);
}
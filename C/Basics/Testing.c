#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d %d", &n, &k);
    int page[n];
    int price[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &price[i]);
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", price[i]);
    }
    for (int i = 0; i < n; i++)
    {
        scanf("%d ", &page[i]);
    }

    for (int i = 0; i < n; i++)
    {
        printf("%d ", page[i]);
    }
    // int total[n], p = 0;
    // for (int i = 0; i < n; i++)
    // {
    //     int k1 = k;
    //     p += page[i];
    //     k1 -= price[i];
    //     for (int j = i + 1; j < n; j++)
    //     {
    //         if (k1 > price[j])
    //         {
    //             p += page[j];
    //             k1 -= price[j];
    //         }
    //     }
    //     total[i] = p;
    // }
    // int max = total[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (total[i] > max)
    //     {
    //         max = total[i];
    //     }
    // }
    // printf("%d", max);
}
#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    for (int i = 0; i < t; i++)
    {
        int n;
        scanf("%d", &n);
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        for (int i = 0; i < n - 1; i++)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[j] < arr[i])
                {
                    int temp = arr[i];
                    arr[i] = arr[j];
                    arr[j] = temp;
                }
            }
        }
        int d = 0, temp = 1000;
        for (int i = 0; i < n - 1; i++)
        {
            d = arr[i + 1] - arr[i];
            if (d < temp)
                temp = d;
        }
        printf("%d\n", temp);
    }
}
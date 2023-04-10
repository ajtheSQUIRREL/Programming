#include <stdio.h>
int main()
{
    int n, position, swap;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n - 1; i++)
    {
        position = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[position] > arr[j])
                position = j;
        }
        if (position != i)
        {
            swap = arr[i];
            arr[i] = arr[position];
            arr[position] = swap;
        }
    }
    for (int i = 0; i < n - 2; i++)
    {
        int sum = arr[i] + arr[i + 1];
        if (sum > arr[i + 2])
        {
            printf("YES\n");
            return 0;
        }
    }
    printf("NO\n");
    return 0;
}
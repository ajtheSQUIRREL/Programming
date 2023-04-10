#include <stdio.h>
int main()
{
    int n, x = 0, y = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > x)
            x = arr[i];
    }
    for (int i = 0; i < n; i++)
    {
        y += (x - arr[i]);
    }
    printf("%d", y);
}
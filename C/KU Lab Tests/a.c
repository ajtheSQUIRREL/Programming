#include <stdio.h>
int main()
{
    int arr[50] = {1, 5, 10};
    int n, arr2[50], x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &x);
        if (x >= arr[i + 2])
        {
            arr[i + 3] = x;
        }
        else if (x >= arr[i + 1])
        {
            arr[i + 3] = arr[i + 2];
            arr[i + 2] = x;
        }
        else if (x >= arr[i])
        {
            arr[i + 3] = arr[i + 2];
            arr[i + 2] = arr[i + 1];
            arr[i + 1] = x;
        }
        else
        {
            arr[i + 3] = arr[i + 2];
            arr[i + 2] = arr[i + 1];
            arr[i + 1] = arr[i];
            arr[i] = x;
        }
    }
    for (int i = 0; i < n + 3; i++)
    {
        printf("%d ", arr[i]);
    }
}
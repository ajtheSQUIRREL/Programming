#include <stdio.h>
int main()
{
    int n, k;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &k);
    for (int j = 0; j < k % n; j++)
    {
        int temp = arr[0];
        for (int i = 0; i < n; i++)
        {
            arr[i] = arr[i + 1];
            arr[n] = temp;
        }
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
}
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
        for (int i = 0, j = n - 1; i <= j; i++, j--)
        {
            printf("%d", arr[i]);
            if (i != j)
                printf(" %d ", arr[j]);
        }
        printf("\n");
    }
}
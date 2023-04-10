#include <stdio.h>
int main()
{
    int m, n, carry;
    scanf("%d", &m);
    int arr[m], sub[m];
    for (int i = 0; i < m; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &n);
    int arr2[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }
    for (int i = 0; i < n; i++)
    {
        if (arr2[i] == 0)
            arr2[i] = 1;
        else if (arr2[i] == 1)
            arr2[i] = 0;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d", arr2[i]);
    }
    printf("\n");
    for (; n > 0; m--, n--)
    {
        int x = arr[m - 1] + arr2[n - 1];
        if (x == 2)
        {
            x = 0;
            carry = 1;
            sub[m] = x;
        }
        else if (x == 0 || x == 1)
        {
            carry = 0;
            sub[m] = x;
        }
    }
    for (int i = 0; i < m; i++)
    {
        printf("%d", sub[i]);
    }
}
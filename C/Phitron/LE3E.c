#include <stdio.h>
#include <string.h>
int main()
{
    int n, p, q, count[] = {0}, z = 0;
    scanf("%d", &n);
    char arr[n + 1];
    scanf("%s", arr);
    int x = strlen(arr);
    if (x < 26)
    {
        printf("NO");
    }
    else
    {
        for (int i = 0; i < n; i++)
        {
            if (64 < arr[i] < 91)
            {
                p = arr[i] - 64;
                count[p]++;
            }
            else if (96 < arr[i] < 123)
            {
                p = arr[i] - 96;
                count[p]++;
            }
        }
        for (int i = 1; i < n; i++)
        {
            if (count[i] > 0)
                z++;
        }
        if (z >= 26)
            printf("YES");
        else
            printf("NO");
    }
}
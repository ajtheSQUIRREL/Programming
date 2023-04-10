#include <stdio.h>
int main()
{
    int n, seven = 0, sodd = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
        {
            seven = seven + arr[i];
        }
        else
        {
            sodd = sodd + arr[i];
        }
    }

    if (seven > sodd)
    {
        printf("EVEN");
    }
    else if (seven < sodd)
    {
        printf("ODD");
    }

    else if (seven == sodd && seven != 0 && sodd != 0)
    {
        printf("EQUAL");
    }
    else
    {
        printf("BOTH ARE ZERO");
    }

    return 0;
}

#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        int a, b;
        scanf("%d %d", &a, &b);
        int min = a > b ? b : a;
        printf("%d\n", min);
    }
    return 0;
}
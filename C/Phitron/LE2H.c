#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    printf("I hate");
    for (int i = 1; i <= x; i++)
    {
        if (i % 2 != 0 && i > 1)
            printf(" that I hate");
        else if (i % 2 == 0)
            printf(" that I love");
    }
    printf(" it");
}
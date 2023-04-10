#include <stdio.h>
int main()
{
    int a, b, i, j, k;
    scanf("%d %d", &a, &b);
    for (i = 1; i <= a; i++)
    {
        if (i % 2 != 0)
        {
            for (j = 1; j <= b; j++)
            {
                printf("#");
            }
            printf("\n");
        }
        else if (i % 2 == 0 && (i - 2) % 4 == 0)
        {
            for (j = 1; j < b; j++)
            {
                printf(".");
            }
            printf("#");
            printf("\n");
        }
        else if (i % 2 == 0 && i % 4 == 0)
        {
            printf("#");
            for (j = 1; j < b; j++)
            {
                printf(".");
            }
            printf("\n");
        }
    }
}
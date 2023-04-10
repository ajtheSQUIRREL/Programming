#include <stdio.h>
int main()
{
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);
    if (a < b)
    {
        if (c < b && a <= c)
            printf("Yes");
        else
            printf("No");
    }
    else if (c < b || a <= c)
        printf("Yes");
    else
        printf("No");
}

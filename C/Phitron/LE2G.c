#include <stdio.h>
int main()
{
    int a, b, c, d;
    scanf("%d %d", &a, &b);
    if (a > b)
        printf("%d", 0);
    else if (a == b)
        printf("%d", 2);
    else if (a < b)
        printf("%d", b - a + 1);
}
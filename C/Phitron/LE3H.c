#include <stdio.h>
int main()
{

    int x;
    int m;
    scanf("%d %d", &x, &m);
    int ar[x];
    for (int i = 0; i < x; i++)
    {
        scanf("%d", &ar[i]);
    }
    for (int i = 0; i < x; i++)
    {
        printf("%d ", ar[(i + m) % x]);
    }
    puts("");

    return 0;
}
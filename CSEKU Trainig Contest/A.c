#include <stdio.h>

void watermellon()
{
    int w;
    scanf("%d", &w);
    if (w % 2 == 0 && 0 < w && w < 101 && w != 2)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }
}

int main()
{
    watermellon();
}
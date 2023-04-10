#include <stdio.h>
int main()
{
    int n, x = 0, y = 0;
    char a;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        scanf(" %c", &a);
        if (a == 65)
            x++;
        else
            y++;
    }
    // printf("%d %d", x, y);

    if (x > y)
        printf("Anton");
    else if (y > x)
        printf("Danik");
    else
        printf("Friendship");
}
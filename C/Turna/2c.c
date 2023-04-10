#include <stdio.h>
int main()
{
    int n, i = 2, ans = 1;
    printf("Enter The Last Digit : ");
    scanf("%d", &n);
    while (i <= n)
    {
        ans *= i * i;
        i += 2;
    }
    if (ans == 1)
        printf("0");
    else
        printf("Ans : %d", ans);
}
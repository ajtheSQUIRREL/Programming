#include <stdio.h>
int main()
{
    int x;
    scanf("%d", &x);
    int c = x % 10;
    int b = (x / 10) % 10;
    int a = x / 100;
    int m = (b * 100) + (c * 10) + a;
    int n = (c * 100) + (a * 10) + b;
    printf("%d", x + m + n);
}
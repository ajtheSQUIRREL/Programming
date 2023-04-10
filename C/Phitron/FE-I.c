#include <stdio.h>
int main()
{
    long long int n;
    scanf("%lld", &n);
    if (n == 0)
        printf("1");
    else if (n == 1)
        printf("5");
    else
        printf("25");
}
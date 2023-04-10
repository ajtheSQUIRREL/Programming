#include <stdio.h>
int main()
{
    long long int n;
    int x;
    scanf("%lld", &n);
    int count = 0;
    while (n > 0)
    {
        x = n % 10;
        n = n / 10;
        if (x == 4 || x == 7)
            count++;
    }
    if (count == 4 || count == 7)
        printf("YES");
    else
        printf("NO");
}
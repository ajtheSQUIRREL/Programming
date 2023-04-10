#include <stdio.h>
int main()
{
    int n;
    float taka = 0;
    scanf("%d", &n);
    if (n <= 100)
    {
        taka = n;
        taka += (taka / 10);
        taka += 15;
    }
    else if (n <= 200)
    {
        taka = 100;
        taka += (n - 100) * 2;
        taka += (taka / 10);
        taka += 15;
    }
    else if (n <= 300)
    {
        taka = 300;
        taka += (n - 200) * 3;
        taka += (taka / 10);
        taka += 15;
    }
    else if (n <= 500)
    {
        taka = 500;
        taka += (n - 300) * 4;
        taka += (taka / 10);
        taka += 15;
    }
    else
    {
        taka = 1400;
        taka += (n - 500) * 5;
        taka += (taka / 10);
        taka += 15;
    }
    printf("%f", taka);
}
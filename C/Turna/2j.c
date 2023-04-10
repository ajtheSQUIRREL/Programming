#include <stdio.h>
int main()
{
    int x = 60, sum = 0;
    while (x >= 1)
    {
        sum += x;
        x -= 3;
    }
    printf("Sum Of The Series : %d", sum);
}
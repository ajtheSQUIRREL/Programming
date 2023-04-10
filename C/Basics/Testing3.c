#include <stdio.h>
#include <string.h>
int main()
{
    int i = 0, x = 0;
    while (i <= 10)
    {
        ++i;
        if (i % 2 == 1)
            continue;
        else
            x = +i;
        printf("%d ", x);
    }
    printf("\nx= %d", x);
}

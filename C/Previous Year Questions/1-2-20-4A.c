#include <stdio.h>
#include <math.h>
int fact(int y)
{

    if (y == 0)

        return 1;

    return y * fact(y - 1);
}
int main()
{
    int n, x;
    float sine = 0;
    printf("Enter The Value of X : ");
    scanf("%d", &x);
    printf("Enter The Value of N : ");
    scanf("%d", &n);
    int z = 1;
    for (int i = 1; i <= n; i++)
    {
        if (i % 2 != 0)
        {
            sine += ((pow(x, z)) / fact(z));
            z += 2;
        }
        else if (i % 2 == 0)
        {
            sine -= ((pow(x, z)) / fact(z));
            z += 2;
        }
    }
    printf("\nThe Sine Of %d is %f", x, sine);
}
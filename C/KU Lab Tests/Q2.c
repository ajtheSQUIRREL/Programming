#include <stdio.h>
int main()
{
    int m = 2, n = 3, z;
    int x = m + n;
    printf("Enter the number of terms : ");
    scanf("%d", &z);
    printf("The Series: %d, %d, ", m, n);
    for (int i = 3; i <= z; ++i)
    {
        printf("%d ", x);
        m = n;
        n = x;
        x = m + n;
    }

    return 0;
}
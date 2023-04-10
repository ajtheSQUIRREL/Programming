#include <stdio.h>
int main()
{
    int n1, n2, n3, i, j, k, temp, sum = 0;
    printf("Enter The Last Three Digits : ");
    scanf("%d %d %d", &n1, &n2, &n3);
    for (i = 1, j = 3, k = 4; i <= n1; i++, j += 2, k += 2)
    {
        temp = sum;
        sum += (i * j * k);
    }
    if (j - 2 < n2 || k - 2 < n3)
        printf("Sum Of The Series : %d", temp);
    else
        printf("Sum Of The Series : %d", sum);
}
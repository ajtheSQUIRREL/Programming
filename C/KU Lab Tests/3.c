#include <stdio.h>
int main()
{
    int arr[5][5];
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    int sumUP = 0, sumDOWN = 0;
    for (int i = 0; i < 5; i++)
    {
        sumUP += arr[0][i];
    }
    for (int i = 0; i < 5; i++)
    {
        sumDOWN += arr[4][i];
    }
    if (sumUP > sumDOWN)
        printf("SUM OF UPPER BOUNDARY IS GREATER");
    else if (sumUP < sumDOWN)
        printf("SUM OF LOWER BOUNDARY IS GREATER");
    else
        printf("BOTH ARE EQUAL");
}
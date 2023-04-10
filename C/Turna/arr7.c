#include<stdio.h>
int main()
{
    int  n, i, j, position, swap;
    printf("Enter The Size Of The Array : ");
    scanf("%d", &n);
    int a[n];
    printf("Enter The Elements Of The Array : ");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for(i = 0; i < n - 1; i++)
    {
        position=i;
    for(j = i + 1; j < n; j++)
    {
        if(a[position] > a[j])
        position=j;
    }
    if(position != i)
    {
    swap=a[i];
    a[i]=a[position];
    a[position]=swap;
    }
    }
    printf("The Array After Sorting (Ascending Order) : ");
    for(i = 0; i < n; i++)
    printf("%d ", a[i]);
    return 0;
}

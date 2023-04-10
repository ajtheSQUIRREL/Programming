#include <stdio.h>
int getMAX()
{
    int a, b;
    printf("Enter Two Numbers : ");
    scanf("%d %d", &a, &b);
    int max = a > b ? a : b;
    return max;
}
int main()
{
    getMAX();
}
#include<stdio.h>
int main()
{
    int n,fact=1;
    printf("Enter The Number : ");
    scanf("%d",&n);
    while(n>1)
    {
        fact*=n;
        n--;
    }
    printf("Factorial Of The Number is %d",fact);
}

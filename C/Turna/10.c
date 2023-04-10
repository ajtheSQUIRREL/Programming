#include<stdio.h>
int main()
{
    int n,rem=0,rev;
    printf("Enter the Number : ");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        rev=(rev*10)+rem;
        n/=10;
    }
    printf("Reverse Of The Number Is %d",rev);
}

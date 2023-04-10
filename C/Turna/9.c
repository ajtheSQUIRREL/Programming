#include<stdio.h>
int main()
{
    int n,sum=0;
    printf("Enter The Number : ");
    scanf("%d",&n);
    while(n>0)
    {
        sum+=n%10;
        n/=10;
    }
    printf("Sum Of The Digits Of The Number Is %d",sum);
}

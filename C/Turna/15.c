#include<stdio.h>
int factorial(int n)
{
    int fact=1;
    while(n>1)
    {
        fact*=n;
        n--;
    }
    return fact;
}

int main()
{
    int a,sum=0;
    printf("Enter The Number : ");
    scanf("%d",&a);
    int z=a;
    while(a>0)
    {
        int rem=a%10;
        int x=factorial(rem);
        sum+=x;
        a/=10;
    }
    if(sum==z)
        printf("%d Is A Strong number.",z);
    else
        printf("%d Is Not A Strong number.",z);
}

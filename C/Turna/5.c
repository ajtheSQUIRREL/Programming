#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter two Numbers : ");
    scanf("%d %d",&m,&n);
    int x=m,y=n,rem;
    while(y!=0)
    {
        rem=x%y;
        x=y;
        y=rem;
    }
    int gcd = x;
    int lcm=(m*n)/gcd;
    printf("GCD Of The Two Numbers Is %d\n LCM Of The Two Numbers Is %d\n",gcd,lcm);
}

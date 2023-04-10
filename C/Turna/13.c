#include<stdio.h>
#include<math.h>
int main()
{
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    int x=n,sum=0;
    while(n>0)
    {
        sum+=pow(n%10,3);
        n/=10;
    }
    if(sum==x)
        printf("%d Is A Armstrong Number.",x);
    else
        printf("%d Is Not A Armstrong Number.",x);
}

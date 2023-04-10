#include<stdio.h>
#include<math.h>
int armstrong(int n)
{
    int x=n,sum=0;
    while(n>0)
    {
        sum+=pow(n%10,3);
        n/=10;
    }
    if(sum==x)
        printf("%d\n",x);
}
int main()
{
    int a,b;
    printf("Enter The Lower Limit : ");
    scanf("%d",&a);
    printf("Enter The Upper Limit : ");
    scanf("%d",&b);
    printf("The Armstrong Numbers : \n");
    for(int i=a;i<=b;i++)
    {
        armstrong(i);
    }
}

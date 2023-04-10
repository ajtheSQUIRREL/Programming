#include<stdio.h>
int main()
{
    int m,n;
    printf("Enter The Lower Limit : ");
    scanf("%d",&m);
    printf("Enter The Upper Limit : ");
    scanf("%d",&n);
    printf("All The Palindrome Numbers : \n");
    for(;m<=n;m++)
    {
    int x=m,rev=0,rem=0;
    while(x>0)
    {
        rem=x%10;
        rev=(rev*10)+rem;
        x/=10;
    }
    if(m==rev)
        printf("%d\n",m);
    }

}


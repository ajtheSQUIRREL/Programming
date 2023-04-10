#include<stdio.h>
int main()
{
    int n;
    printf("Enter The Number : ");
    scanf("%d",&n);
    int x=n,rev=0,rem=0;
    while(x>0)
    {
        rem=x%10;
        rev=(rev*10)+rem;
        x/=10;
    }
    if(n==rev)
        printf("%d Is A Palindrome.\n",n);
    else
        printf("%d Is Not A Palindrome.\n",n);
}

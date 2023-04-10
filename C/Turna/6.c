#include<stdio.h>
int main()
{
    int n;
    printf("Enter the Number : ");
    scanf("%d",&n);
    for(int i=2;i<n;i++)
    {
            if(n%i==0)
            {
                printf("%d Is Not A Prime Number.",n);
                return 0;
            }
    }
    printf("%d Is A Prime Number.",n);
}

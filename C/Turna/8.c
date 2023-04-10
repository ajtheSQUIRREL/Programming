#include<stdio.h>
int main()
{
    int n,count=0;
    printf("Enter The Number : ");
    scanf("%d",&n);
    while(n>0)
    {
        n/=10;
        count++;
    }
    printf("Total Numbers In The Digit Is : %d",count);
}

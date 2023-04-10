#include<stdio.h>
int main()
{
    int n;
    printf("Enter The Size Of The Array : ");
    scanf("%d",&n);
    int arr[n],arr2[n];
    printf("Enter The Elements Of The Array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        arr2[i]=arr[i];
    }
    printf("Copy Of The Array : ");
        for(int i=0;i<n;i++)
    {
        printf("%d ",arr2[i]);
    }
    return 0;
}

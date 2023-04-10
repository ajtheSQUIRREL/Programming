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
    }
        for(int i=0,j=n-1;i<j;i++,j--)
    {
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    printf("The Array After Reversing : ");
    for(int i=0;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}


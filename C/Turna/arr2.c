#include<stdio.h>
int main()
{
    int n;
    printf("Enter The Size Of The Array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter The Elements Of The Array : ");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int min=arr[0];
    int max=arr[0];
    int min_pos=0;
    int max_pos=0;
    for(int i=0;i<n-1;i++)
    {
        if(min>arr[i+1])
        {
            min=arr[i+1];
            min_pos=i+1;
        }
        if(max<arr[i+1])
        {
            max=arr[i+1];
            max_pos=i+1;
        }
    }
    printf("The Max Value is %d And It's Index is %d\nThe Min Value Is %d And It's Index is %d",max,max_pos,min,min_pos);
    return 0;
}

#include<stdio.h>
int main()
{
  int m, n, largest, smallest;
  int largerow, largecol, smallrow, smallcol;
  printf("Enter number of row and column: ");
  scanf("%d %d",&m,&n);
  int arr[m][n], i, j;
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      printf("Enter arr[%d][%d]: ",i,j);
      scanf("%d", &arr[i][j]);
    }
    printf("\n");
  }
  largest=arr[0][0];
  smallest=arr[0][0];
  for(i=0;i<m;i++)
  {
    for(j=0;j<n;j++)
    {
      if(largest<arr[i][j])
      {
        largest=arr[i][j];
        largerow=i;
        largecol=j;
      }

      if(smallest>arr[i][j])
      {
        smallest=arr[i][j];
        smallrow=i;
        smallcol=j;
      }
    }
  }
  printf("\n");
  printf("Largest element in array is %d in location arr[%d][%d]\n",
             largest, largerow, largecol);
  printf("Smallest element in array is %d in location arr[%d][%d]\n",
             smallest, smallrow, smallcol);
  return 0;
}

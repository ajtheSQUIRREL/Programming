#include<stdio.h>
int main()
{
 	int i, j, rows, columns, Mul[10][10], Number;

 	printf("Enter The Number Of Rows And Columns : ");
 	scanf("%d %d", &i, &j);

 	printf("Enter The Matrix : \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0;columns < j;columns++)
    	{
      		scanf("%d", &Mul[rows][columns]);
    	}
  	}

 	printf("Enter The Multiplication Value  :  ");
 	scanf("%d", &Number);

 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		Mul[rows][columns] = Number * Mul[rows][columns];
   	 	}
  	}

 	printf("The Matrix After Multiplication : \n");
 	for(rows = 0; rows < i; rows++)
  	{
   		for(columns = 0; columns < j; columns++)
    	{
      		printf("%d \t ", Mul[rows][columns]);
    	}
    	printf("\n");
  	}
 	return 0;
}

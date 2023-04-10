#include <stdio.h>

// function for showing the square
void showsquare(int n)
{
    printf("\nthe square = %d", n * n);
}

// write a function for showing the double.
void showdouble(int n)
{
    printf("\nthe double = %d", 2 * n);
}

// write a function to find the largest of three input integers. This function should look like the following.

void findlargest(int n1, int n2, int n3)
{
    // write the body of the function
    if (n1 > n2 && n1 > n3)
        printf("\nThe largest number is %d", n1);
    else if (n2 > n1 && n2 > n3)
        printf("\nThe largest number is %d", n2);
    else
        printf("\nThe largest number is %d", n3);
}

int main(void)
{
    // calling the function for showing the square.
    showsquare(10);

    // call the function for showing the double
    showdouble(10);
    // call the findlargest function.
    findlargest(15, 30, 20);
}

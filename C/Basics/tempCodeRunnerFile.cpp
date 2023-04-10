#include <stdio.h>
int main()
{
    int h;
    printf("Enter your height:");
    scanf("%d", &h);
    int x = h % 12;
    int y = h / 12;
    printf("Your Height is %d Feet %d Inches", y, x);
}
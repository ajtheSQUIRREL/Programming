#include <stdio.h>
int main()
{
    double a, b, area, p;
    printf("Enter the length of one side:");
    scanf("%lf", &a);
    printf("Enter the length of another side:");
    scanf("%lf", &b);
    area = a * b;
    p = 2 * (a + b);
    printf("The Area Of The Rectangle Is %.2lf\n The Perimeter Of The Rectangle Is %.2lf", area, p);
}
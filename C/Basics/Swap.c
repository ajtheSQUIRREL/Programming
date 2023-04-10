#include <stdio.h>
int main()
{
    int a, b, x;
    printf("Entere Two Numbers : ");
    scanf("%d %d", &a, &b);
    x = a;
    a = b;
    b = x;
    printf("Numbers After Swaping : %d %d", a, b);
}
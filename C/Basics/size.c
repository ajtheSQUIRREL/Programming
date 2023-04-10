#include <stdio.h>
int main()
{
    char s[] = "Banana";
    int k = sizeof(s) / sizeof(s[0]);
    printf("%d", k);
}
#include <stdio.h>
#include<stdio.h>
int main()
{
    char str[100];
    int countC=0, countS=0;
    printf("Enter a string: ");
    gets(str);
    for (int i = 0; str[i] != NULL; i++) {

        if (str[i] >= 'A' && str[i] <= 'Z')
            countC++;
        else if (str[i] >= 'a' && str[i] <= 'z')
            countS++;
    }

    printf("Total Capital Letters : %d\nTotal Small Letters : %d", countC, countS);

    return 0;
}

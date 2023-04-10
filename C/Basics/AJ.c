#include <stdio.h>

int main()
{
    char ch;
    printf("Enter The Character : ");
    scanf("%c", &ch);
    if (ch == 65 || ch == 69 || ch == 73 || ch == 79 || ch == 85 || ch == 97 || ch == 101 || ch == 105 || ch == 111 || ch == 117)
        printf("%c Is A Vowel.", ch);
    else if (ch >= 65 && ch <= 90 || ch >= 97 && ch <= 122)
        printf("%c Is A Consonant.", ch);
    else if (ch >= 48 && ch <= 57)
        printf("%c Is A Digit.", ch);
    else if (ch == 10 || ch == 32)
        printf("You Entered A White Space.");
    else
        printf("%c Is A Special Character.", ch);
}
#include <stdio.h>
int main()
{
    char line[150];
    int vowels=0, consonant=0, digit=0, space=0,special=0;
    printf("Enter The String : ");
    fgets(line, sizeof(line), stdin);
    for (int i = 0; line[i] != '\0'; ++i)
    {
        line[i] = tolower(line[i]);

        if (line[i] == 'a' || line[i] == 'e' || line[i] == 'i' ||
            line[i] == 'o' || line[i] == 'u')
            ++vowels;
        else if ((line[i] >= 'a' && line[i] <= 'z'))
            ++consonant;
        else if (line[i] >= '0' && line[i] <= '9')
            ++digit;
        else if (line[i] == ' ')
            ++space;
        else
            ++special;

    }

    printf("Vowels : %d", vowels);
    printf("\nConsonants : %d", consonant);
    printf("\nDigits : %d", digit);
    printf("\nWhite spaces : %d", space);
    printf("\nSpecial Characters : %d", special);
    return 0;
}

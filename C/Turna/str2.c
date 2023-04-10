#include <stdio.h>
int main()
{
    char str[1000], ch;
    int count = 0;
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    printf("Enter A Character To Find it's Frequency: ");
    scanf("%c", &ch);
    for (int i = 0; str[i] != '\0'; ++i)
    {
        if (ch == str[i])
            ++count;
    }
    printf("Frequency Of %c Is %d", ch, count);
    return 0;
}

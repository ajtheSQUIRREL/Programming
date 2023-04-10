#include <stdio.h>
#include <string.h>

void CharPosition(char c, char str[], int Pos[])
{

    int setIndex = 1;
    for (int i = 1; i <= strlen(str); i++)
    {
        if (str[i - 1] == c)
        {
            Pos[setIndex] = i;
        }
        else
        {
            Pos[setIndex] = 0;
        }
        setIndex++;
    }
}

int main()
{

    char myStr[101];
    fgets(myStr, 101, stdin);

    char myChar;
    scanf(" %c", &myChar);

    int stringLen = strlen(myStr);
    int Pos[stringLen];

    CharPosition(myChar, myStr, Pos);

    for (int i = 1; i < stringLen; i++)
    {
        if (Pos[i] >= 1)
        {
            printf("%d ", Pos[i]);
        }
    }
    printf("\n");

    return 0;
}

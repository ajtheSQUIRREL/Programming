#include <stdio.h>
int main()
{
    int std[50], to9 = 0, to19 = 0, to29 = 0, to39 = 0, to49 = 0, to59 = 0, to69 = 0, to79 = 0, to89 = 0, to100 = 0;
    printf("Enter Marks Of 50 Students : ");
    for (int i = 0; i < 50; i++)
    {
        scanf("%d", &std[i]);
    }
    for (int i = 0; i < 50; i++)
    {
        if (std[i] < 10)
            to9++;
        else if (std[i] < 20)
            to19++;
        else if (std[i] < 30)
            to29++;
        else if (std[i] < 40)
            to39++;
        else if (std[i] < 50)
            to49++;
        else if (std[i] < 60)
            to59++;
        else if (std[i] < 70)
            to69++;
        else if (std[i] < 80)
            to79++;
        else if (std[i] < 90)
            to89++;
        else
            to100++;
    }
    printf("Number of students who got marks between 0 to 9 is %d\n", to9);
    printf("Number of students who got marks between 10 to 19 is %d\n", to19);
    printf("Number of students who got marks between 20 to 29 is %d\n", to29);
    printf("Number of students who got marks between 30 to 39 is %d\n", to39);
    printf("Number of students who got marks between 40 to 49 is %d\n", to49);
    printf("Number of students who got marks between 50 to 59 is %d\n", to59);
    printf("Number of students who got marks between 60 to 69 is %d\n", to69);
    printf("Number of students who got marks between 70 to 79 is %d\n", to79);
    printf("Number of students who got marks between 80 to 89 is %d\n", to89);
    printf("Number of students who got marks between 90 to 100 is %d\n", to100);
}
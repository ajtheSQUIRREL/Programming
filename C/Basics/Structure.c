#include <stdio.h>

struct student

{

    int id;
    char name[100];
};

int main()

{

    struct student st[10];
    for (int i = 0; i < 10; i++)
    {
        scanf("%d %s", &st[i].id, &st[i].name);
    }
    for (int i = 0; i < 10; i++)
    {
        printf("%d %s\n", st[i].id, st[i].name);
    }
    return 0;
}
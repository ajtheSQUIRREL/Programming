#include <stdio.h>
struct student
{
    int roll;
    int class;
    int marks;
};
int main()
{
    int n;
    scanf("%d", &n);
    struct student std[n];
    int total = 0;
    for (int i = 0; i < n; i++)
    {
        scanf("%d %d %d", &std[i].roll, &std[i].class, &std[i].marks);
        total += std[i].marks;
    }
    printf("%d", total);
}
#include <stdio.h>
#include <stdlib.h>
struct Node
{
    int value;
    struct Node *next;
};
struct Node *head = NULL;
void insertAtTail(int val)
{
    struct Node *new, *temp;
    new = (struct Node *)malloc(sizeof(struct Node));
    new->value = val;
    new->next = NULL;
    if (head == NULL)
    {
        head = new;
        return;
    }
    temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new;
}
void insertAtHead(int val)
{
    struct Node *new;
    new = (struct Node *)malloc(sizeof(struct Node));
    new->value = val;
    new->next = NULL;
    if (head == NULL)
    {
        head = new;
        return;
    }
    new->next = head;
    head = new;
}
void sortList()
{
    struct Node *current = head, *index = NULL;
    int temp;

    if (head == NULL)
    {
        return;
    }
    else
    {
        while (current != NULL)
        {
            index = current->next;

            while (index != NULL)
            {
                if (current->value > index->value)
                {
                    temp = current->value;
                    current->value = index->value;
                    index->value = temp;
                }
                index = index->next;
            }
            current = current->next;
        }
    }
}
int countDigits(int num)
{
    static int count = 0;

    if (num > 0)
    {
        count++;
        countDigits(num / 10);
    }
    else
    {
        return count;
    }
}
int largestElement()
{
    int max;
    struct Node *temp = head;
    while (temp != NULL)
    {
        if (max < temp->value)
            max = temp->value;
        temp = temp->next;
    }
    return max;
}
int largestElementDigit(int digit)
{
    int max = -1;
    struct Node *temp = head;
    while (temp != NULL)
    {
        if (countDigits(temp->value) == digit)
        {
            if (max < temp->value)
                max = temp->value;
            temp = temp->next;
        }
    }
    return max;
}
int secondLargestDivBy3(int digit)
{
}
void display()
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        printf("%d ", temp->value);
        temp = temp->next;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        int x;
        scanf("%d", &x);
        insertAtTail(x);
    }
    sortList();
    display();
    struct Node *temp;
    temp = head;
    int mx = 0, prevmx = 0;
    while (temp != NULL)
    {
        int z = countDigits(temp->value);
        if (z == 2 && temp->value % 3 == 0)
        {
            mx = temp->value;
        }
        temp = temp->next;
    }
    printf("\n%d", mx);
}
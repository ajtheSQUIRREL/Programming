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
    insertAtTail(5);
    insertAtTail(6);
    insertAtTail(7);
    insertAtHead(3);
    display();
}
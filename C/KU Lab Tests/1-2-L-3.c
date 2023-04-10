#include <stdio.h>
#include <stdlib.h>
struct Node
{

    int value;
    struct Node *prev;
    struct Node *next;
};

struct Node *createNode(int val)
{
    struct Node *new;

    new = (struct Node *)malloc(sizeof(struct Node));
    new->value = val;
    new->next = NULL;
    new->prev = NULL;
    return new;
}
void deletationofnode(struct Node *head, int value)
{
    struct Node *temp;
    temp = (struct Node *)malloc(sizeof(struct Node));
    while (head != NULL)
    {
        if (head->value == value)
        {
            temp = head;
            head->prev->next = head->next;
            head->next->prev = head->prev;
            free(temp);
        }
        else
        {
            head = head->next;
        }
    }
}

void print(struct Node *x)
{
    printf("\n");
    while (x != NULL)
    {
        printf("%d ", x->value);
        x = x->next;
    }
}
int main()
{
    int n, x, i = 0;
    struct Node *s, *new, *head, *temp;
    head = (struct Node *)malloc(sizeof(struct Node));
    new = (struct Node *)malloc(sizeof(struct Node));

    printf("Enter the no of nodes:");
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &x);
        if (i == 0)
        {
            new = createNode(x);
            head = new;
            temp = new;
            i = 1;
        }
        else
        {
            temp = head;
            new = createNode(x);
            while (temp->value != x && temp != NULL)
            {
                if (temp->next == NULL)
                {
                    temp->next = new;
                    new->prev = temp;

                    goto s;
                }
                temp = temp->next;
            }

            if (temp->next == NULL)
            {
                temp->next = new;
                new->prev = temp;
                goto s;
            }

            new = createNode(x);
            new->next = temp->next;
            temp->next->prev = new;
            temp->next = new;
            new->prev = temp;

        s:;
            print(head);
            printf("\n");
        }
    }
    return 0;
}
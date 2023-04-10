#include <stdio.h>
#include <stdlib.h>
/**/ struct Node
{

    int id;
    struct Node *prev;
    struct Node *next;
};

/**/ struct Node *createNode(int value)
{
    struct Node *n;

    n = (struct Node *)malloc(sizeof(struct Node));
    n->id = value;
    n->next = NULL;
    n->prev = NULL;
    return n;
}
void print(struct Node *p)
{
    printf("\n");

    while (p != NULL)
    {
        printf(" %d ", p->id);
        p = p->next;
    }
}
int main()
{
    int n, x, i = 0;
    struct Node *s, *p, *head, *thead;
    head = (struct Node *)malloc(sizeof(struct Node));
    p = (struct Node *)malloc(sizeof(struct Node));
    // thead=(struct Node *) malloc (sizeof (struct Node));;
    //*thead

    printf("Enter the no of nodes:");
    scanf("%d", &n);
    while (n--)
    {
        scanf("%d", &x);
        /**/ if (i == 0)
        {
            p = createNode(x);
            head = p;
            thead = p;
            i = 1;
        }
        else
        {
            thead = head;
            p = createNode(x);
            while (thead->id != x && thead != NULL)
            {
                if (thead->next == NULL)
                {
                    thead->next = p;
                    p->prev = thead;
                    // break;
                    goto s;
                }
                thead = thead->next;
            }

            if (thead->next == NULL)
            {
                thead->next = p;
                p->prev = thead;
                goto s;
            }

            p = createNode(x);
            p->next = thead->next;
            thead->next->prev = p;
            thead->next = p;
            p->prev = thead;

        s:;

            print(head);
            printf("\n");
            // thead=thead->next;
        }
    }
    return 0;
}
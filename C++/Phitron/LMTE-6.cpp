#include <bits/stdc++.h>
using namespace std;
class node
{
public:
    int value;
    node *next;
    node(int val)
    {
        value = val;
        next = NULL;
    }
};
void insertatTAIL(node *&head, int val)
{
    node *newnode = new node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void display(node *n)
{
    while (n != NULL)
    {
        cout << n->value;
        if (n->next != NULL)
            cout << "->";
        n = n->next;
    }
}
int main()
{
    node *head = NULL;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int x;
        cin >> x;
        if (x % 2 == 0)
            x = -1;
        insertatTAIL(head, x);
    }
    display(head);
}
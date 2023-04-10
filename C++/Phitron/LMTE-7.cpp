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
node *reverseKNodes(node *&head, int k)
{
    node *prev = NULL;
    node *curr = head;
    node *next;
    int count = 0;
    while (curr != NULL && count < k)
    {
        next = curr->next;
        curr->next = prev;
        prev = curr;
        curr = next;
        count++;
    }
    if (next != NULL)
        head->next = reverseKNodes(next, k);
    return prev;
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
        insertatTAIL(head, x);
    }
    int k;
    cin >> k;
    node *newHead = reverseKNodes(head, k);
    display(newHead);
}
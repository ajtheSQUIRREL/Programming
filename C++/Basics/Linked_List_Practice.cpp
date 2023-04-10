#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;
    Node(int val)
    {
        data = val;
        next = NULL;
    }
};
void insertTAIL(Node *&head, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    Node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}
void display(Node *n)
{
    while (n != NULL)
    {
        cout << n->data << " ";
        n = n->next;
    }
}
int main()
{
    Node *head = NULL;
    insertTAIL(head, 5);
    insertTAIL(head, 7);
    insertTAIL(head, 9);
    display(head);
}
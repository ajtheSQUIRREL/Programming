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
void insertatHEAD(node *&head, int val)
{
    node *newnode = new node(val);
    newnode->next = head;
    head = newnode;
}
int countLength(node *&head)
{
    int count = 0;
    node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void deletionAtHead(node *&head)
{
    node *temp = head;
    if (temp != NULL)
    {
        head = temp->next;
        delete temp;
    }
    else
        cout << "There Is No Value In The Linked List" << endl;
}
void deletionAtTail(node *&head)
{
    node *temp = head;
    if (temp != NULL && temp->next != NULL)
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        node *delNode = temp->next;
        temp->next = NULL;
        delete delNode;
    }
    else
    {
        if (temp == NULL)
            cout << "There Is No Value In The Linked List" << endl;
        else
            deletionAtHead(head);
    }
}
void deletionAtSpecificPosition(node *&head, int pos)
{
    node *temp = head;
    if (temp != NULL && pos <= countLength(head))
    {
        if (pos == 1)
            deletionAtHead(head);
        else if (pos == countLength(head))
            deletionAtTail(head);
        else
        {
            int i = 1;
            while (i < pos - 1)
            {
                temp = temp->next;
                i++;
            }
            node *delNode = temp->next;
            temp->next = delNode->next;
            delete delNode;
        }
    }
    else
    {
        if (pos > countLength(head))
            cout << "The Position Is Out Of Bound" << endl;
        else
            cout << "There Is No Value In The Linked List." << endl;
    }
}
void display(node *n)
{
    while (n != NULL)
    {
        cout << n->value << " ";
        n = n->next;
    }
}
int main()
{
    node *head = NULL;
    int k, m, n;
    cin >> k >> m >> n;
    for (int i = 0; i < k; i++)
    {
        int x;
        cin >> x;
        insertatTAIL(head, x);
    }
    int pos = m + 1;
    for (int i = 1; i <= k; i++)
    {
        if (i % n == 0)
        {
            if (pos > countLength(head))
                break;
            for (int j = 0; j < n; j++)
            {
                deletionAtSpecificPosition(head, pos);
            }
            pos += m;
        }
    }
    display(head);
}
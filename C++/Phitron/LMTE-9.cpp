#include <bits/stdc++.h>
using namespace std;
class doublyNode
{
public:
    int value;
    doublyNode *prev;
    doublyNode *next;
    doublyNode(int val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};
void insertatTAIL(doublyNode *&head, int val);
void insertatHEAD(doublyNode *&head, int val);
int countLength(doublyNode *&head);
void reverseList(doublyNode *&head);
void deleteNode(doublyNode *&head, doublyNode *del);
void removeDuplicates(doublyNode *&head);
void display(doublyNode *n);
void insertatTAIL(doublyNode *&head, int val)
{
    doublyNode *newnode = new doublyNode(val);
    if (head == NULL)
    {
        head = newnode;
        return;
    }
    doublyNode *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
    newnode->prev = temp;
}
void insertatHEAD(doublyNode *&head, int val)
{
    doublyNode *newnode = new doublyNode(val);
    head->prev = newnode;
    newnode->next = head;
    head = newnode;
}
int countLength(doublyNode *&head)
{
    int count = 0;
    doublyNode *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void reverseList(doublyNode *&head)
{
    if (head != NULL)
    {
        doublyNode *prevNode = head;
        doublyNode *tempNode = head;
        doublyNode *curNode = head->next;

        prevNode->next = NULL;
        prevNode->prev = NULL;

        while (curNode != NULL)
        {
            tempNode = curNode->next;
            curNode->next = prevNode;
            prevNode->prev = curNode;
            prevNode = curNode;
            curNode = tempNode;
        }
        head = prevNode;
        head->prev = NULL;
    }
}
void removeDuplicates(doublyNode *&head)
{
    if (head == NULL || head->next == NULL)
        return;
    doublyNode *ptr1, *ptr2;
    for (ptr1 = head; ptr1 != NULL; ptr1 = ptr1->next)
    {
        ptr2 = ptr1->next;
        while (ptr2 != NULL)
        {
            if (ptr1->value == ptr2->value)
            {
                doublyNode *Next = ptr2->next;
                deleteNode(head, ptr2);
                ptr2 = Next;
            }
            else
                ptr2 = ptr2->next;
        }
    }
}
void deleteNode(doublyNode *&head, doublyNode *del)
{
    if (head == NULL || del == NULL)
        return;
    if (head == del)
        head = del->next;
    if (del->next != NULL)
        del->next->prev = del->prev;
    if (del->prev != NULL)
        del->prev->next = del->next;
    delete del;
    return;
}
void display(doublyNode *n)
{
    while (n != NULL)
    {
        cout << n->value << " ";
        n = n->next;
    }
}
void printPrevAndNext(doublyNode *head)
{

    for (int i = 1; i <= countLength(head); i++)
    {
        doublyNode *temp = head;
        while (temp->value != i)
        {
            temp = temp->next;
        }
        if (temp->prev == NULL)
            cout << 0 << " " << temp->next->value << endl;
        else if (temp->next == NULL)
            cout << temp->prev->value << " " << 0 << endl;
        else
            cout << temp->prev->value << " " << temp->next->value << endl;
    }
}
int main()
{
    doublyNode *head = NULL;
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int x;
        cin >> x;
        if (x != 0)
            insertatTAIL(head, x);
        insertatTAIL(head, i);
        cin >> x;
        if (x != 0)
            insertatTAIL(head, x);
    }
    reverseList(head);
    removeDuplicates(head);
    reverseList(head);
    cout << endl
         << endl;
    printPrevAndNext(head);
}
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
void deleteNode(doublyNode *&head, doublyNode *del)
{
    /* base case */
    if (head == NULL || del == NULL)
        return;

    /* If node to be deleted is head node */
    if (head == del)
        head = del->next;

    /* Change next only if node to be
    deleted is NOT the last node */
    if (del->next != NULL)
        del->next->prev = del->prev;

    /* Change prev only if node to be
    deleted is NOT the first node */
    if (del->prev != NULL)
        del->prev->next = del->next;

    /* Finally, free the memory occupied by del*/
    free(del);
    return;
}
void removeDuplicates(doublyNode *&head)
{
    // if DLL is empty or if it contains only
    // a single node
    if (head == NULL || head->next == NULL)
        return;

    doublyNode *ptr1, *ptr2;

    // pick elements one by one
    for (ptr1 = head; ptr1 != NULL; ptr1 = ptr1->next)
    {
        ptr2 = ptr1->next;

        // Compare the picked element with the
        // rest of the elements
        while (ptr2 != NULL)
        {

            // if duplicate, then delete it
            if (ptr1->value == ptr2->value)
            {

                // store pointer to the node next to 'ptr2'
                doublyNode *Next = ptr2->next;

                // delete node pointed to by 'ptr2'
                deleteNode(head, ptr2);

                // update 'ptr2'
                ptr2 = Next;
            }

            // else simply move to the next node
            else
                ptr2 = ptr2->next;
        }
    }
}

void reverseList(doublyNode *&head)
{
    // 1. If head is not null create three nodes
    //    prevNode - pointing to head,
    //    tempNode - pointing to head,
    //    curNode - pointing to next of head
    if (head != NULL)
    {
        doublyNode *prevNode = head;
        doublyNode *tempNode = head;
        doublyNode *curNode = head->next;

        // 2. assign next and previous of the
        //    prevNode as null to make the first
        //    node as last node of the reversed list
        prevNode->next = NULL;
        prevNode->prev = NULL;

        while (curNode != NULL)
        {
            // 3. While the curNode is not null adjust links
            //    (unlink curNode and link it to the reversed list
            //    from front and modify curNode and prevNode)
            tempNode = curNode->next;
            curNode->next = prevNode;
            prevNode->prev = curNode;
            prevNode = curNode;
            curNode = tempNode;
        }

        // 4. Make prevNode (last node) as head
        head = prevNode;
    }
}
void display(doublyNode *n)
{
    while (n != NULL)
    {
        cout << n->value << " ";
        n = n->next;
    }
}
int main()
{
    doublyNode *head = NULL;
    insertatTAIL(head, 5);
    insertatTAIL(head, 6);
    insertatTAIL(head, 7);
    insertatTAIL(head, 7);
    insertatTAIL(head, 8);
    reverseList(head);
    removeDuplicates(head);
    display(head);
}
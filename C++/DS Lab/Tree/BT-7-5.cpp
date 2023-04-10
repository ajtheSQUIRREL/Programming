#include "BinaryTree.h"
void inOrder_Stack(treeNode *root)
{
    stack<treeNode *> s;
    treeNode *curr = root;
    cout << "Inorder : ";
    while (curr != NULL || !s.empty())
    {
        while (curr != NULL)
        {
            s.push(curr);
            curr = curr->leftChild;
        }
        curr = s.top();
        s.pop();
        cout << curr->data << " ";
        curr = curr->rightChild;
    }
}
int main()
{
    treeNode *root = createTree();
    inOrder_Stack(root);
}
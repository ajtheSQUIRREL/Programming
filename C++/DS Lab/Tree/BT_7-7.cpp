#include "BinaryTree.h"
void preOrder_Stack(treeNode *root)
{
    if (root == NULL)
        return;
    stack<treeNode *> s;

    s.push(root);
    cout << "Preorder : ";
    while (!s.empty())
    {
        treeNode *node = s.top();
        cout << node->data << " ";
        s.pop();
        if (node->rightChild)
            s.push(node->rightChild);
        if (node->leftChild)
            s.push(node->leftChild);
    }
}

int main()
{
    treeNode *root = createTree();
    preOrder_Stack(root);
}
#include "BinaryTree.h"
void postOrder_Stack(treeNode *root)
{
    if (root == NULL)
        return;
    stack<treeNode *> s1, s2;

    s1.push(root);
    treeNode *node;

    while (!s1.empty())
    {
        node = s1.top();
        s1.pop();
        s2.push(node);

        if (node->leftChild)
            s1.push(node->leftChild);
        if (node->rightChild)
            s1.push(node->rightChild);
    }
    cout << "Postorder : ";
    while (!s2.empty())
    {
        node = s2.top();
        s2.pop();
        cout << node->data << " ";
    }
}
int main()
{
    treeNode *root = createTree();
    postOrder_Stack(root);
}
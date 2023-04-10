#include <bits/stdc++.h>

using namespace std;

class treeNode
{
public:
    int data;
    treeNode *leftChild;
    treeNode *rightChild;
    treeNode(int value)
    {
        data = value;
        leftChild = NULL;
        rightChild = NULL;
    }
};
treeNode *createTree()
{
    treeNode *root = NULL;
    int n;
    cout << "Enter The Root Value : ";
    cin >> n;
    root = new treeNode(n);
    queue<treeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        treeNode *cur = q.front();
        q.pop();
        int x, y;
        cout << "Enter The Left Child And Right Child Of " << cur->data << " : ";
        cin >> x >> y;
        treeNode *n1 = NULL;
        treeNode *n2 = NULL;
        if (x != -1)
        {
            n1 = new treeNode(x);
        }
        if (y != -1)
        {
            n2 = new treeNode(y);
        }
        cur->leftChild = n1;
        cur->rightChild = n2;
        if (n1 != NULL)
        {
            q.push(n1);
        }
        if (n2 != NULL)
        {
            q.push(n2);
        }
    }
    return root;
}

bool isSymmetric(treeNode *root)
{
    if (root == NULL)
        return true;
    if (!root->leftChild && !root->rightChild)
        return true;

    queue<treeNode *> q;

    q.push(root);
    q.push(root);

    treeNode *leftNode, *rightNode;

    while (!q.empty())
    {
        leftNode = q.front();
        q.pop();

        rightNode = q.front();
        q.pop();

        if (leftNode->data != rightNode->data)
        {
            return false;
        }

        if (leftNode->leftChild && rightNode->rightChild)
        {
            q.push(leftNode->leftChild);
            q.push(rightNode->rightChild);
        }

        else if (leftNode->leftChild || rightNode->rightChild)
            return false;

        if (leftNode->rightChild && rightNode->leftChild)
        {
            q.push(leftNode->rightChild);
            q.push(rightNode->leftChild);
        }

        else if (leftNode->rightChild || rightNode->leftChild)
            return false;
    }

    return true;
}

int main()
{
    treeNode *root = createTree();
    if (isSymmetric(root))
        cout << "The Tree Is Symmetric." << endl;
    else
        cout << "The Tree Is Not Symmetric." << endl;
}
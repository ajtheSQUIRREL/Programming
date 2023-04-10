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

void level_Order(treeNode *root)
{
    if (root == NULL)
        return;
    queue<treeNode *> q;
    q.push(root);
    q.push(NULL);
    while (!q.empty())
    {
        treeNode *chkNode = q.front();
        q.pop();
        if (chkNode != NULL)
        {
            cout << chkNode->data << " ";
            if (chkNode->leftChild != NULL)
                q.push(chkNode->leftChild);
            if (chkNode->rightChild != NULL)
                q.push(chkNode->rightChild);
        }
        else
        {
            if (!q.empty())
                q.push(NULL);
        }
    }
}

int main()
{
    treeNode *root = createTree();
    level_Order(root);
}
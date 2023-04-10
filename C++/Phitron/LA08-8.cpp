#include <bits/stdc++.h>

using namespace std;

class treeNode
{
public:
    int data;
    treeNode *leftChild;
    treeNode *rightChild;
    treeNode(int dataue)
    {
        data = dataue;
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
void spacePrint(int level)
{
    for (int i = 0; i < level; i++)
        cout << "   ";
}
void printTree(treeNode *root, int level)
{
    if (root == NULL)
        return;
    if (root->leftChild == NULL && root->rightChild == NULL)
    {
        cout << root->data << endl;
        return;
    }
    else
    {
        cout << endl;
        spacePrint(level);
        cout << "Root  :" << root->data << endl;
    }
    if (root->leftChild != NULL)
    {
        spacePrint(level);
        cout << "Left  :";
        printTree(root->leftChild, level + 1);
    }
    if (root->rightChild != NULL)
    {
        spacePrint(level);
        cout << "Right :";
        printTree(root->rightChild, level + 1);
    }
}

void average_level(treeNode *root)
{

    queue<treeNode *> q;
    q.push(root);

    while (!q.empty())
    {
        int sum = 0, count = 0;
        queue<treeNode *> temp;
        while (!q.empty())
        {
            treeNode *n = q.front();
            q.pop();
            sum += n->data;
            count++;
            if (n->leftChild != NULL)
                temp.push(n->leftChild);
            if (n->rightChild != NULL)
                temp.push(n->rightChild);
        }
        q = temp;
        cout << (sum * 1.0 / count) << " ";
    }
}

int main()
{
    treeNode *root = createTree();
    average_level(root);
}
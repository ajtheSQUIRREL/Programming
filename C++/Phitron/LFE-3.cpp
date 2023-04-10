// Can_You_Catch_Me
#include <bits/stdc++.h>

using namespace std;

class treeNode
{
public:
    char data;
    treeNode *leftChild;
    treeNode *rightChild;
    treeNode(char value)
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
    cin >> n;
    to_string(n);
    root = new treeNode(n);
    queue<treeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        treeNode *cur = q.front();
        q.pop();
        int x, y;
        cin >> x >> y;

        to_string(x);

        to_string(y);
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

void levelOrderTraversal(treeNode *root, string &chk)
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
            // cout << chkNode->data << " ";
            chk += to_string(chkNode->data);
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
    printTree(root, 0);
}
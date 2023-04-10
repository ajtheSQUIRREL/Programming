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

void inOrder(treeNode *root, string &chk)
{
    if (root == NULL)
        return;
    inOrder(root->leftChild, chk);
    chk += to_string(root->data);
    inOrder(root->rightChild, chk);
}

void preOrder(treeNode *root, string &chk)
{
    if (root == NULL)
        return;
    chk += to_string(root->data);
    preOrder(root->leftChild, chk);
    preOrder(root->rightChild, chk);
}

void postOrder(treeNode *root, string &chk)
{
    if (root == NULL)
        return;
    postOrder(root->leftChild, chk);
    postOrder(root->rightChild, chk);
    chk += to_string(root->data);
}

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
bool isSame(treeNode *root1, treeNode *root2)
{
    string chkIn1, chkIn2, chkpre1, chkpre2, chkpost1, chkpost2;
    inOrder(root1, chkIn1);
    inOrder(root2, chkIn2);
    preOrder(root1, chkpre1);
    preOrder(root2, chkpre2);
    postOrder(root1, chkpost1);
    postOrder(root2, chkpost2);
    if (chkIn1 == chkIn2 && chkpre1 == chkpre2 && chkpost1 == chkpost2)
        return true;
    else
        return false;
}
int main()
{
    cout << "Create Tree 1 :" << endl;
    treeNode *root1 = createTree();
    cout << "Create Tree 2 :" << endl;
    treeNode *root2 = createTree();
    if (isSame(root1, root2))
        cout << "Tree 1 And Tree 2 Are Same" << endl;
    else
        cout << "Tree 1 And Tree 2 Are Not Same" << endl;
}
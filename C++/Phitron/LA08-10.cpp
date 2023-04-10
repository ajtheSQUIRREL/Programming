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
void TraverseNodes(treeNode *node, int min, int &nextMin)
{
    if (!node || node->data == 0)
    {
        return;
    }
    if (node->data > min)
    {
        if (nextMin == -1 || node->data < nextMin)
        {
            nextMin = node->data;
        }
    }
    TraverseNodes(node->leftChild, min, nextMin);
    TraverseNodes(node->rightChild, min, nextMin);
}
int second_minimum(treeNode *root)
{
    int min = (root && root->data != 0) ? root->data : -1;
    int nextMin = -1;
    TraverseNodes(root, min, nextMin);
    return nextMin;
}

int main()
{
    treeNode *root = createTree();
    int x = second_minimum(root);
    if (x != -1)
        cout << "The Second Minimum Value Is " << x << endl;
    else
        cout << x << endl;
}
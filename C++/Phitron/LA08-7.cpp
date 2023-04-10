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

int traverse(treeNode *root, int *tilt)
{
    if (!root)
        return 0;

    // Compute tilts of left and right subtrees
    // and find sums of left and right subtrees
    int left = traverse(root->leftChild, tilt);
    int right = traverse(root->rightChild, tilt);

    // Add current tilt to overall
    *tilt += abs(left - right);

    // Returns sum of nodes under current tree
    return left + right + root->data;
}
int Tilt(treeNode *root)
{
    int tilt = 0;
    traverse(root, &tilt);
    return tilt;
}

int main()
{
    treeNode *root = createTree();
    int x = Tilt(root);
    cout << x;
}
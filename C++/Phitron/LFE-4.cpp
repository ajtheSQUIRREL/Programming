#include <bits/stdc++.h>
// Convert_It
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

    cin >> n;
    root = new treeNode(n);
    queue<treeNode *> q;
    q.push(root);
    while (!q.empty())
    {
        treeNode *cur = q.front();
        q.pop();
        int x, y;
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

void treeData(treeNode *root, vector<int> &data)
{
    if (root == NULL)
        return;
    data.push_back(root->data);
    treeData(root->leftChild, data);
    treeData(root->rightChild, data);
}

int main()
{
    treeNode *root = createTree();
    vector<int> data;
    treeData(root, data);

    int q;
    cin >> q;
    for (int i = 0; i < q; i++)
    {
        int x, y;
        cin >> x;
        if (x == 2)
        {
            int max = *max_element(data.begin(), data.end());
            cout << max << endl;
            for (int i = 0; i < data.size(); i++)
            {
                if (data[i] == max)
                {
                    data.erase(data.begin() + i);
                    break;
                }
            }
        }
        else if (x == 1)
        {
            cin >> y;
            data.push_back(y);
        }
    }
}
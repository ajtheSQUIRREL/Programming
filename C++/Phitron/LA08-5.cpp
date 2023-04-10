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

void zigzag_order(treeNode *root)
{
    if (!root)
        return;

    stack<treeNode *> currentlevel;
    stack<treeNode *> nextlevel;

    currentlevel.push(root);

    bool level = true;
    while (!currentlevel.empty())
    {

        treeNode *temp = currentlevel.top();
        currentlevel.pop();

        if (temp)
        {

            cout << temp->data << " ";

            if (level)
            {
                if (temp->leftChild)
                    nextlevel.push(temp->leftChild);
                if (temp->rightChild)
                    nextlevel.push(temp->rightChild);
            }
            else
            {
                if (temp->rightChild)
                    nextlevel.push(temp->rightChild);
                if (temp->leftChild)
                    nextlevel.push(temp->leftChild);
            }
        }

        if (currentlevel.empty())
        {
            level = !level;
            swap(currentlevel, nextlevel);
        }
    }
}

int main()
{
    treeNode *root = createTree();
    zigzag_order(root);
}
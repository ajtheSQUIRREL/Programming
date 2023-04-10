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

treeNode *createBST(treeNode *root, int val)
{
    treeNode *node = new treeNode(val);
    if (root == NULL)
    {
        root = node;
    }
    else
    {
        if (val < root->data)
            root->leftChild = createBST(root->leftChild, val);
        else if (val > root->data)
            root->rightChild = createBST(root->rightChild, val);
        else
        {
            cout << "Duplicate Not Allowed" << endl;
        }
    }
    return root;
}
treeNode *minValueNode(treeNode *node)
{
    treeNode *current = node;

    while (current && current->leftChild != NULL)
        current = current->leftChild;

    return current;
}
treeNode *deleteBST(treeNode *root, int key)
{
    if (root == NULL)
        return root;

    if (key < root->data)
        root->leftChild = deleteBST(root->leftChild, key);
    else if (key > root->data)
        root->rightChild = deleteBST(root->rightChild, key);

    else
    {
        // node has no child or one child
        if (root->leftChild == NULL and root->rightChild == NULL)
            return NULL;
        else if (root->leftChild == NULL)
        {
            treeNode *temp = root->rightChild;
            free(root);
            return temp;
        }
        else if (root->rightChild == NULL)
        {
            treeNode *temp = root->leftChild;
            free(root);
            return temp;
        }

        // node with two children: Get the inorder successor
        treeNode *temp = minValueNode(root->rightChild);
        root->data = temp->data;

        // Delete the inorder successor
        root->rightChild = deleteBST(root->rightChild, temp->data);
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

void inOrder(treeNode *root, string &chk)
{
    if (root == NULL)
        return;
    inOrder(root->leftChild, chk);
    chk += to_string(root->data) + ' ';
    inOrder(root->rightChild, chk);
}

void preOrder(treeNode *root, string &chk)
{
    if (root == NULL)
        return;
    chk += to_string(root->data) + ' ';
    preOrder(root->leftChild, chk);
    preOrder(root->rightChild, chk);
}

void postOrder(treeNode *root, string &chk)
{
    if (root == NULL)
        return;
    postOrder(root->leftChild, chk);
    postOrder(root->rightChild, chk);
    chk += to_string(root->data) + ' ';
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

int searchInorder(int inOrder[], int current, int start, int end)
{
    for (int i = start; i <= end; i++)
    {
        if (inOrder[i] == current)
            return i;
    }
    return -1;
}

treeNode *buildTreePreIn(int preOrder[], int inOrder[], int start, int end)
{
    static int id = 0;
    int current = preOrder[id];
    id++;
    treeNode *newNode = new treeNode(current);
    if (start == end)
        return newNode;
    int pos = searchInorder(inOrder, current, start, end);
    newNode->leftChild = buildTreePreIn(preOrder, inOrder, start, pos - 1);
    newNode->rightChild = buildTreePreIn(preOrder, inOrder, pos + 1, end);
    return newNode;
}

void printLeafs(treeNode *root)
{
    if (root == NULL)
        return;
    if (root->leftChild == NULL && root->rightChild == NULL)
    {
        cout << root->data << " ";
        return;
    }
    printLeafs(root->leftChild);
    printLeafs(root->rightChild);
}

void printLeftNonLeafs(treeNode *root)
{
    if (root == NULL)
        return;
    if (root->leftChild != NULL)
    {
        cout << root->data << " ";
        printLeftNonLeafs(root->leftChild);
    }
    else if (root->rightChild != NULL)
    {
        cout << root->data << " ";
        printLeftNonLeafs(root->rightChild);
    }
}

void printRightNonLeafs(treeNode *root)
{
    if (root == NULL)
        return;
    if (root->rightChild != NULL)
    {
        cout << root->data << " ";
        printLeftNonLeafs(root->rightChild);
    }
    else if (root->leftChild != NULL)
    {
        cout << root->data << " ";
        printLeftNonLeafs(root->leftChild);
    }
}

void boundaryTraversal(treeNode *root)
{
    if (root == NULL)
        return;
    cout << root->data << " ";
    printLeftNonLeafs(root->leftChild);
    printLeafs(root->leftChild);
    printLeafs(root->rightChild);
    printRightNonLeafs(root->rightChild);
}
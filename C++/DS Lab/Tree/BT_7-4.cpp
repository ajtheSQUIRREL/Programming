#include <bits/stdc++.h>
using namespace std;

void inOrder(char tree[], int n, string &chk, int index)
{
    if (index >= n)
        return;
    if (tree[2 * index + 1] != '#')
        inOrder(tree, n, chk, (2 * index + 1));
    if (tree[index] != '#')
    {
        chk += tree[index];
        chk += ' ';
    }
    if (tree[2 * index + 2] != '#')
        inOrder(tree, n, chk, (2 * index + 2));
}

void preOrder(char tree[], int n, string &chk, int index)
{
    if (index >= n)
        return;
    if (tree[index] != '#')
    {
        chk += tree[index];
        chk += ' ';
    }
    if (tree[2 * index + 1] != '#')
        preOrder(tree, n, chk, (2 * index + 1));
    if (tree[2 * index + 2] != ' ')
        preOrder(tree, n, chk, (2 * index + 2));
}

void postOrder(char tree[], int n, string &chk, int index)
{
    if (index >= n)
        return;
    if (tree[2 * index + 1] != '#')
        postOrder(tree, n, chk, (2 * index + 1));
    if (tree[2 * index + 2] != ' ')
        postOrder(tree, n, chk, (2 * index + 2));
    if (tree[index] != '#')
    {
        chk += tree[index];
        chk += ' ';
    }
}

int main()
{
    cout << "Enter Total Number of Element in Tree : ";
    int z;
    cin >> z;
    int n;
    n = pow(2, z) - 1;
    char tree[n];
    for (int i = 0; i < n; i++)
    {
        tree[i] = '#';
    }
    cout << "Enter The Value Of Root : ";
    cin >> tree[0];
    for (int i = 0;; i++)
    {

        if (((2 * i) + 1) < n)
        {
            if (tree[i] != '#')
            {
                cout << "Enter Left Child of " << tree[i] << " (If There Is No Left Child, Enter #) : ";
                cin >> tree[2 * i + 1];
            }
        }
        else
            break;
        if (((2 * i) + 2) < n)
        {
            if (tree[i] != '#')
            {
                cout << "Enter Right Child of " << tree[i] << " (If There Is No Right Child, Enter #) : ";
                cin >> tree[2 * i + 2];
            }
        }
        else
            break;
    }
    string pre = "";
    preOrder(tree, n, pre, 0);
    cout << "Preorder : " << pre << endl;
    string in = "";
    inOrder(tree, n, in, 0);
    cout << "Inorder : " << in << endl;
    string post = "";
    postOrder(tree, n, post, 0);
    cout << "Postorder : " << post << endl;
}
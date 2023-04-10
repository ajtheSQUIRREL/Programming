#include <bits/stdc++.h>
using namespace std;

void inOrder(int tree[], int n, string &chk, int index)
{
    if (index >= n)
        return;
    if (tree[2 * index + 1] != -1)
        inOrder(tree, n, chk, (2 * index + 1));
    if (tree[index] != -1)
    {
        chk += to_string(tree[index]);
        chk += ' ';
    }
    if (tree[2 * index + 2] != -1)
        inOrder(tree, n, chk, (2 * index + 2));
}

int main()
{
    cout << "Enter Total Number of Element in Tree : ";
    int z;
    cin >> z;
    int n;
    n = pow(2, z) - 1;
    int tree[n];
    for (int i = 0; i < n; i++)
    {
        tree[i] = -1;
    }
    cout << "Enter The Value Of Root : ";
    cin >> tree[0];
    for (int i = 0;; i++)
    {

        if (((2 * i) + 1) < n)
        {
            if (tree[i] != -1)
            {
                cout << "Enter Left Child of " << tree[i] << " (If There Is No Left Child, Enter -1) : ";
                cin >> tree[2 * i + 1];
            }
        }
        else
            break;
        if (((2 * i) + 2) < n)
        {
            if (tree[i] != -1)
            {
                cout << "Enter Right Child of " << tree[i] << " (If There Is No Right Child, Enter -1) : ";
                cin >> tree[2 * i + 2];
            }
        }
        else
            break;
    }
    string in = "";
    inOrder(tree, n, in, 0);
    cout << "Inorder : " << in << endl;
}
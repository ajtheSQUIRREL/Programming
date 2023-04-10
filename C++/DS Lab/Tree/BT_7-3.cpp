#include <bits/stdc++.h>
using namespace std;

void inOrder(int tree[], int n, string &chk, int index)
{
    if (index >= n)
        return;
    inOrder(tree, n, chk, (2 * index + 1));
    chk += to_string(tree[index]) + ' ';
    inOrder(tree, n, chk, (2 * index + 2));
}

void preOrder(int tree[], int n, string &chk, int index)
{
    if (index >= n)
        return;
    chk += to_string(tree[index]) + ' ';
    preOrder(tree, n, chk, (2 * index + 1));
    preOrder(tree, n, chk, (2 * index + 2));
}

void postOrder(int tree[], int n, string &chk, int index)
{
    if (index >= n)
        return;
    postOrder(tree, n, chk, (2 * index + 1));
    postOrder(tree, n, chk, (2 * index + 2));
    chk += to_string(tree[index]) + ' ';
}

int main()
{
    cout << "Enter Total Number of Element in Tree : ";
    int n;
    cin >> n;
    int tree[n];
    cout << "Enter The Value Of Root : ";
    cin >> tree[0];
    for (int i = 0;; i++)
    {

        if (((2 * i) + 1) < n)
        {
            cout << "Enter Left Child of " << tree[i] << " : ";
            int x;
            cin >> x;
            tree[2 * i + 1] = x;
        }
        else
            break;
        if (((2 * i) + 2) < n)
        {
            cout << "Enter Right Child of " << tree[i] << " : ";
            int y;
            cin >> y;
            tree[2 * i + 2] = y;
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
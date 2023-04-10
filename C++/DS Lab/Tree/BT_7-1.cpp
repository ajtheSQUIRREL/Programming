#include <bits/stdc++.h>
using namespace std;
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
    cout << "All The Data : ";
    for (int i = 0; i < n; i++)
    {
        cout << tree[i] << " ";
    }
    cout << endl;
    cout << "Enter The Index You Want To See : ";
    int index;
    cin >> index;
    cout << "Data : " << tree[index] << endl;
    if (((2 * index) + 1) < n)
        cout << "Left Child : " << tree[2 * index + 1] << endl;
    else
        cout << "There Is No Left Child" << endl;
    if (((2 * index) + 2) < n)
        cout << "Right Child : " << tree[2 * index + 2] << endl;
    else
        cout << "There is no Right Child" << endl;
}
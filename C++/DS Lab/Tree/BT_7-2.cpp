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
    int posLeft = 0, posRight = 0;
    cout << "Data Of The Leftmost Path : " << tree[0] << " ";
    for (int i = 0;; i++)
    {
        posLeft = 2 * posLeft + 1;
        if (posLeft < n)
            cout << tree[posLeft] << " ";
        else
            break;
    }
    cout << endl;
    cout << "Data Of The Rightmost Path : " << tree[0] << " ";
    for (int i = 0;; i++)
    {
        posRight = 2 * posRight + 2;
        if (posRight < n)
            cout << tree[posRight] << " ";
        else
            break;
    }
    cout << endl;
}
#include "Abrar_Stack.h"
int main()
{
    Stack<int> s;
    cout << "Enter How many elements you want to push : ";
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter Element " << i + 1 << " : ";
        int x;
        cin >> x;
        s.push(x);
    }
    cout << "All Elements In Decending Order : ";
    while (!s.empty())
    {
        cout << s.pop() << " ";
    }
}
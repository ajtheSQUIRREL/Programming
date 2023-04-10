#include "Stack_Array.h"
int main()
{
    class Stack<char> s;
    cout << "Enter Character Data : ";
    string str;
    getline(cin, str);

    for (int i = 0; i < str.size(); i++)
    {
        char x = str[i];
        s.push(x);
    }
    cout << "All Elements In Decending Order : ";
    while (!s.isEmpty())
    {
        cout << s.pop();
    }
}

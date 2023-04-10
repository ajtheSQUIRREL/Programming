#include "Abrar_Stack.h"
int main()
{
    class Stack<char> s;
    cout << "Enter The Mathematical Expression : ";
    string str;
    getline(cin, str);

    for (int i = 0; i < str.length(); i++)
    {
        if (str[i] == '(' || str[i] == '{' || str[i] == '[')
            s.push(str[i]);
        else if ((str[i] == ')' && s.Top() == '(') || (str[i] == '}' && s.Top() == '{') || (str[i] == ']' && s.Top() == '['))
        {
            s.pop();
        }
    }
    if (s.empty())
    {
        cout << "The Expression Is Valid." << endl;
    }
    else
        cout << "The Expression Is Not Valid." << endl;
}
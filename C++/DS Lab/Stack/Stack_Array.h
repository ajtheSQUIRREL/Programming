#include <bits/stdc++.h>

using namespace std;

#define MAX 1000

template <typename N>
class Stack
{
    N top;

public:
    N a[MAX];

    Stack()
    {
        top = -1;
    }

    bool push(N x)
    {
        if (top >= (MAX - 1))
        {
            cout << "Stack Overflow";
            return false;
        }
        else
        {
            a[++top] = x;
            // cout << x << " pushed into stack\n";
            return true;
        }
    }

    N pop()
    {
        if (top < 0)
        {
            cout << "Stack Underflow";
            return 0;
        }
        else
        {
            N x = a[top--];
            return x;
        }
    }
    N peek()
    {
        if (top < 0)
        {
            cout << "Stack is Empty";
            return 0;
        }
        else
        {
            N x = a[top];
            return x;
        }
    }

    bool isEmpty()
    {
        return (top < 0);
    }
};
int precision(char c)
{
    if (c == '^')
        return 3;
    else if (c == '/' || c == '*')
        return 2;
    else if (c == '+' || c == '-')
        return 1;
    else
        return -1;
}
string infixToPrefix(string chk)
{
    reverse(chk.begin(), chk.end());
    Stack<char> st;
    string result;
    for (int i = 0; i < chk.size(); i++)
    {
        if (chk[i] >= '0' && chk[i] <= '9' || (chk[i] >= 'a' && chk[i] <= 'z') || (chk[i] >= 'A' && chk[i] <= 'Z'))
            result += chk[i];
        else if (chk[i] == ')')
        {
            st.push(chk[i]);
        }
        else if (chk[i] == '(')
        {
            while (!st.isEmpty() && st.peek() != ')')
            {
                result += st.pop();
            }
            if (!st.isEmpty())
                st.pop();
        }
        else
        {
            while (!st.isEmpty() && precision(st.peek()) > precision(chk[i]))
            {
                result += st.pop();
            }
            st.push(chk[i]);
        }
    }
    while (!st.isEmpty())
    {
        result += st.pop();
    }
    reverse(result.begin(), result.end());
    return result;
}

string infixToPostfix(string chk)
{
    Stack<char> st;
    string result;
    for (int i = 0; i < chk.size(); i++)
    {
        if (chk[i] >= '0' && chk[i] <= '9' || (chk[i] >= 'a' && chk[i] <= 'z') || (chk[i] >= 'A' && chk[i] <= 'Z'))
            result += chk[i];
        else if (chk[i] == '(')
            st.push(chk[i]);
        else if (chk[i] == ')')
        {
            while (!st.isEmpty() && st.peek() != '(')
            {
                result += st.pop();
            }
            if (!st.isEmpty())
                st.pop();
        }
        else
        {
            while (!st.isEmpty() && precision(st.peek()) >= precision(chk[i]))
            {
                result += st.pop();
            }
            st.push(chk[i]);
        }
    }
    while (!st.isEmpty())
    {
        result += st.pop();
    }
    return result;
}
int prefixEvaluation(string chk)
{
    Stack<int> st;
    for (int i = chk.length() - 1; i >= 0; i--)
    {
        if (chk[i] >= '0' && chk[i] <= '9')
            st.push(chk[i] - '0');
        else
        {
            int a = st.pop();
            int b = st.pop();
            switch (chk[i])
            {
            case '+':
                st.push(a + b);
                break;
            case '-':
                st.push(a - b);
                break;
            case '*':
                st.push(a * b);
                break;
            case '/':
                st.push(a / b);
                break;
            case '^':
                st.push(pow(a, b));
                break;
            default:
                break;
            }
        }
    }
    return st.peek();
}
int postfixEvaluation(string chk)
{
    Stack<int> st;
    for (int i = 0; i < chk.length(); i++)
    {
        if (chk[i] >= '0' && chk[i] <= '9')
        {
            int x = chk[i] - '0';
            st.push(x);
        }
        else
        {
            int a = st.pop();
            int b = st.pop();
            switch (chk[i])
            {
            case '+':
                st.push(a + b);

                break;
            case '-':
                st.push(b - a);

                break;
            case '*':
                st.push(a * b);

                break;
            case '/':
                st.push(b / a);

                break;
            case '^':
                st.push(pow(a, b));
                break;
            default:
                break;
            }
        }
    }
    return st.peek();
}
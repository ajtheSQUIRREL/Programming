#include <bits/stdc++.h>

using namespace std;

template <typename N>
class Node
{

public:
    N value;
    Node *next;
    Node *prev;

    Node(N val)
    {
        value = val;
        next = NULL;
        prev = NULL;
    }
};
// Stack <float> st;
template <typename S>
class Stack
{

    Node<S> *head;
    Node<S> *top;
    Node<S> *mid;
    int count = 0;

public:
    Stack()
    {
        head = NULL;
        top = NULL;
        mid = NULL;
    }

    // PUSH
    void push(S val)
    {

        Node<S> *newNode = new Node<S>(val);

        if (head == NULL)
        {
            head = top = mid = newNode;
            count++;
            return;
        }

        top->next = newNode;
        newNode->prev = top;
        top = newNode;
        count++;
        if (count % 2 == 1)
        {
            mid = mid->next;
        }
    }
    // POP

    S pop()
    {
        Node<S> *delNode;
        delNode = top;
        S chk;
        if (head == NULL)
        { // There is No Element in the Stack
            cout << "Stack Underflow " << endl;
            return chk;
        }

        if (top == head) // There is only 1 element
        {
            head = top = mid = NULL;
        }
        else // There is More than 1 element
        {
            top = delNode->prev;
            top->next = NULL;
        }
        if (count % 2 == 0)
            mid = mid->prev;
        chk = delNode->value;
        delete delNode;
        count--;
        return chk;
    }

    // EMPTY
    bool empty()
    {
        if (head == NULL)
            return true;
        else
            return false;
    }
    // SIZE
    int size()
    {
        return count;
    }
    // TOP
    S Top()
    {
        S chk;
        if (top == NULL)
        {
            cout << "Stack Underflow | There is no Element in Top " << endl;
        }
        else
            chk = top->value;

        return chk;
    }
    // Mid Element
    S Mid()
    {
        return mid->value;
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
            while (!st.empty() && st.Top() != ')')
            {
                result += st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else
        {
            while (!st.empty() && precision(st.Top()) > precision(chk[i]))
            {
                result += st.pop();
            }
            st.push(chk[i]);
        }
    }
    while (!st.empty())
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
            while (!st.empty() && st.Top() != '(')
            {
                result += st.pop();
            }
            if (!st.empty())
                st.pop();
        }
        else
        {
            while (!st.empty() && precision(st.Top()) >= precision(chk[i]))
            {
                result += st.pop();
            }
            st.push(chk[i]);
        }
    }
    while (!st.empty())
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
    return st.Top();
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
    return st.Top();
}
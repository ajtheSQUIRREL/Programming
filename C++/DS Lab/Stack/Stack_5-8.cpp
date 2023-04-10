#include "Abrar_Stack.h"

string infixToPostfix_MultipleDigit(string chk)
{
    Stack<char> st;
    string result;
    for (int i = 0; i < chk.size(); i++)
    {
        if (chk[i] >= '0' && chk[i] <= '9')
            result += chk[i];
        else if (chk[i] == '(')
        {
            st.push(chk[i]);
            if ('9' >= result.back() && result.back() >= '0')
                result += '#';
        }
        else if (chk[i] == ')')
        {
            if ('9' >= result.back() && result.back() >= '0')
                result += '#';
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
                if ('9' >= result.back() && result.back() >= '0')
                    result += '#';
                result += st.pop();
            }
            if ('9' >= result.back() && result.back() >= '0')
                result += '#';
            st.push(chk[i]);
        }
    }
    if ('9' >= result.back() && result.back() >= '0')
        result += '#';
    while (!st.empty())
    {
        result += st.pop();
    }
    return result;
}

int postfix_MultipleDigit_Evaluation(string chk)
{

    Stack<int> st;
    string num;
    for (int i = 0; i < chk.length(); i++)
    {
        if (chk[i] >= '0' && chk[i] <= '9')
        {
            num += chk[i];
        }
        else if (chk[i] == '#')
        {
            st.push(stoi(num));
            num.clear();
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

int main()
{
    string exp;
    cout << "Enter Proper Infix Expression (Without Space) : ";
    cin >> exp;
    string postfix = infixToPostfix_MultipleDigit(exp);
    cout << endl
         << postfix << endl;
    int val = postfix_MultipleDigit_Evaluation(postfix);
    cout << endl
         << "The Value Of Postfix Evaluation : " << val << endl;
}
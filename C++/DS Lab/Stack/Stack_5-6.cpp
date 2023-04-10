#include "Stack_Array.h"

int main()
{
     string exp;
     cout << "Enter The Infix Arithmetic expression (Without Space) : ";
     getline(cin, exp);
     string postfix = infixToPostfix(exp);
     cout << endl
          << "The Postfix Expression Of The Given Input : " << postfix << endl
          << endl;
     int value = postfixEvaluation(postfix);
     cout << "The Value Of Postfix Evaluation : " << value << endl
          << endl;
}
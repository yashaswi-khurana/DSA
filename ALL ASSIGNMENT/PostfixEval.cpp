#include <bits/stdc++.h>
using namespace std;

int evaluatePostfix(string expression)
{
    stack<int> s;
    for (char c : expression)
    {
        if (isdigit(c))
        {
            s.push(c - '0');
        }
        else
        {
            int op2 = s.top();
            s.pop();
            int op1 = s.top();
            s.pop();
            switch (c)
            {
            case '+':
                s.push(op1 + op2);
                break;
            case '-':
                s.push(op1 - op2);
                break;
            case '*':
                s.push(op1 * op2);
                break;
            case '/':
                s.push(op1 / op2);
                break;
            }
        }
    }
    return s.top();
}

int main()
{
    string str = "52+";

    cout << evaluatePostfix(str);

    return 0;
}

//7

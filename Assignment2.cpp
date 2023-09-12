#include <bits/stdc++.h>
using namespace std;
int Eval_Postfix(string str)
{
    stack<int> st;
    for (int i = 0; i < str.size(); ++i) {
        if (isdigit(str[i]))
            st.push(str[i] - '0');
        else {
            int val1 = st.top();
            st.pop();
            int val2 = st.top();
            st.pop();
            switch (str[i]) {
            case '+':
                st.push(val2 + val1);
                break;
            case '-':
                st.push(val2 - val1);
                break;
            case '*':
                st.push(val2 * val1);
                break;
            case '/':
                st.push(val2 / val1);
                break;
            }
        }
    }
    return st.top();
}
int main()
{
    string expression = "241*+984/+";
    cout << "postfix evaluation: " << Eval_Postfix(expression)<<endl;
    return 0;
}
//Ans:
//postfix evaluation: 11
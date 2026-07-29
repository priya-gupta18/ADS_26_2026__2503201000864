
#include <bits/stdc++.h>
using namespace std;

int evaluatePrefix(string prefix)
{
    stack<int> st;

    reverse(prefix.begin(), prefix.end());

    for (char ch : prefix)
    {
        if (isdigit(ch))
        {
            st.push(ch - '0');
        }
        else
        {
            int a = st.top();
            st.pop();

            int b = st.top();
            st.pop();

            int result;

            switch (ch)
            {
                case '+':
                    result = a + b;
                    break;

                case '-':
                    result = a - b;
                    break;

                case '*':
                    result = a * b;
                    break;

                case '/':
                    result = a / b;
                    break;

                case '^':
                    result = pow(a, b);
                    break;

                default:
                    cout << "Invalid Operator";
                    return -1;
            }

            st.push(result);
        }
    }

    return st.top();
}

int main()
{
    string prefix;

    cout << "Enter Prefix Expression: ";
    cin >> prefix;

    cout << "Result = " << evaluatePrefix(prefix);

    return 0;
}
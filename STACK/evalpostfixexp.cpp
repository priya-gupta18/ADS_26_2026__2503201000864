
#include <iostream>
#include <stack>
#include <sstream>
using namespace std;


int power(int base, int exp)
{
    int result = 1;
    while (exp > 0)
    {
        result *= base;
        exp--;
    }
    return result;
}


int evaluatePostfix(string exp)
{
    stack<int> st;
    stringstream ss(exp);
    string token;

    while (ss >> token)
    {
        
        if (isdigit(token[0]))
        {
            st.push(stoi(token));
        }
        else
        {
            int b = st.top();
            st.pop();
            int a = st.top();
            st.pop();

            switch (token[0])
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

                case '%':
                    st.push(a % b);
                    break;

                case '^':
                    st.push(power(a, b));
                    break;

                default:
                    cout << "Invalid Operator";
                    return -1;
            }
        }
    }

    return st.top();
}

int main()
{
    string postfix;
    getline(cin, postfix);
 cout << "Result = " << evaluatePostfix(postfix);

    return 0;
}
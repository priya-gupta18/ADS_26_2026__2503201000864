#include <iostream>
#include <stack>
#include <cctype>
using namespace std;

#define N 5
int st[N], top = -1;

void push(int x) {
    if(top == N-1) cout << "Overflow\n";
    else st[++top] = x;
}

void pop() {
    if(top == -1) cout << "Underflow\n";
    else cout << "Popped: " << st[top--] << endl;
}

int pre(char c) {
    if(c=='+' || c=='-') return 1;
    if(c=='*' || c=='/') return 2;
    if(c=='^') return 3;
    return 0;
}

string postfix(string s) {
    stack<char> st;
    string p="";
    for(char c:s) {
        if(isalnum(c)) p+=c;
        else if(c=='(') st.push(c);
        else if(c==')') {
            while(st.top()!='(') {
                p+=st.top(); st.pop();
            }
            st.pop();
        }
        else {
            while(!st.empty() && pre(st.top())>=pre(c)) {
                p+=st.top(); st.pop();
            }
            st.push(c);
        }
    }
    while(!st.empty()) {
        p+=st.top(); st.pop();
    }
    return p;
}

int main() {
    push(10);
    push(20);
    push(30);

    pop();

    string infix;
    cout << "Enter infix: ";
    cin >> infix;

    cout << "Postfix: " << postfix(infix);
    return 0;
}
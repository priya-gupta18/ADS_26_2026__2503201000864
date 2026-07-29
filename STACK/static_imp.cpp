#include <iostream>
using namespace std;

#define MAXSIZE 100

int st[MAXSIZE];
int top = -1;


bool isOverflow() {
    return top == MAXSIZE - 1;
}

bool isUnderflow() {
    return top == -1;
}

int main() {

    if (isOverflow())
        cout << "Stack Overflow" << endl;
    else
        cout << "Stack is not Full" << endl;

    if (isUnderflow())
        cout << "Stack Underflow (Empty Stack)" << endl;
    else
        cout << "Stack is not Empty" << endl;

    return 0;
}
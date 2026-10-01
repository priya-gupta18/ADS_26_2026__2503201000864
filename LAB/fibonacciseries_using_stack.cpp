#include <iostream>
#include <stack>
using namespace std;

int main()
{
    int n;
    cout << "Enter number of terms: ";
    cin >> n;

    stack<int> s;

    int a = 0, b = 1;

    for (int i = 0; i < n; i++)
    {
        s.push(a);
        int c = a + b;
        a = b;
        b = c;
    }

    cout << "Fibonacci Series: ";

    while (!s.empty())
    {
        cout << s.top() << " ";
        s.pop();
    }

    return 0;
}
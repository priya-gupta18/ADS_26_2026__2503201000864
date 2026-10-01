#include <iostream>
using namespace std;

int fact(int n) {
    if(n == 0) return 1;
    return n * fact(n-1);
}

int fib(int n) {
    if(n <= 1) return n;
    return fib(n-1) + fib(n-2);
}

int main() {
    int n;
    cout << "Enter number: ";
    cin >> n;

    cout << "Factorial = " << fact(n) << endl;

    cout << "Fibonacci: ";
    for(int i=0; i<n; i++)
        cout << fib(i) << " ";

    return 0;
}


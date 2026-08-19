//factorial
// #include<iostream>
// using namespace std;
//     int factorial(int n){
//         if(n==1 ||n==0){
//             return 1;
//         }
//         else{
//             return  n* factorial (n-1);
//         }
//     }

//     int main(){
//     cout<<factorial(9);
        
//     }


// //fabonacci series
// #include <iostream>
// using namespace std;
// int fib(int n) {
//     if (n == 0 || n == 1) {
//         return n;
//     }
//     else {
//         return fib(n - 1) + fib(n - 2);
//     }
// }

// int main() {
//     int n;

//     cout << "Enter number of terms: ";
//     cin >> n;

//     for (int i = 0; i < n; i++) {
//         cout << fib(i) << " ";
//     }

//     return 0;
// }

//GCD
//  #include <iostream>
// using namespace std;

// int gcd(int a, int b) {
//     if (b == 0)
//         return a;
//     return gcd(b, a % b);
// }

// int main() {
//     int a, b;
//     cin >> a >> b;

//     cout << gcd(a, b);

//     return 0;
// }


// #include <iostream>
// using namespace std;

// void fun1(int n) {
//     if (n > 0) {
//         cout << n;
//         fun1(n - 1);
//     }
// }

// int main() {
//     int n;
//     cin >> n;

//     fun1(5);

//     return 0;
// }



// #include<iostream>
// using namespace std;
// int fun2(int n){
//     if(n>0){
//         fun2(n-1);
//         cout<<n;
//     }
// }
// int main(){
// int n;
// cin>>n;
// fun2(4);
// }

#include<iostream>
using namespace std;
int fun2(int);
int fun1(int n){
    if(n>0)
    cout<<n;
    fun2(n-1);
}
int fun2(int n){
    if(n>0)
    cout<<n;
    fun1(n-1);
}
int main(){
    int n;
    cin>>n;
    fun1(3);
    fun2(6);
    return 0;
}
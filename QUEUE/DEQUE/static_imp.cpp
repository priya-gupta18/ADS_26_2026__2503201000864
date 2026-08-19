#include <iostream>
using namespace std;
int main()
{
    deque<int> dq;
    dq.push_back(10);
    dq.push_back(20);
    dq.push_back(30);
    dq.push_front(5);
    cout << dq.front()<<endl;
    cout << dq.back()<<endl;

    dq.pop_front();
    dq.pop_back();
    cout << "remaining elemnts"<<" ";
    for (int x : dq)
    {
        cout << x<<" ";
    }

    return 0;
}
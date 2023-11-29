#include <bits/stdc++.h>
using namespace std;

int main()
{
    // MAX HEAP
    // priority_queue<int> q;
    // q.push(1);
    // q.push(21);
    // q.push(31);
    // q.push(11);
    // while (!q.empty())
    // {
    //     cout << q.top() << " ";
    //     q.pop();
    // }
    // MIN HEAP
    priority_queue<int, vector<int>, greater<int>> q;
    q.push(1);
    q.push(21);
    q.push(31);
    q.push(11);
    while (!q.empty())
    {
        cout << q.top() << " ";
        q.pop();
    }
    return 0;
}
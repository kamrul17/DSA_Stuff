#include <bits/stdc++.h>
using namespace std;

int main()
{
    list<int> v = {3, 4, 5, 6};
    v.push_back(7);

    v.push_front(4);
    v.pop_front();
    v.pop_back();

    // v.pop_back();
    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}
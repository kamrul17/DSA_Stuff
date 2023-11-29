#include <bits/stdc++.h>
using namespace std;
void print(set<int> &s)
{
    for (auto &&i : s)
    {
        cout << i << " ";
    }
}
int main()
{
    set<int> s;
    s.insert(1);
    s.insert(11);
    s.insert(12);
    // auto it = s.find(1);
    // if (it != s.end())
    // {
    //     cout << *it;
    //     s.erase(it);
    // }
    // cout << endl;
    print(s);

    return 0;
}
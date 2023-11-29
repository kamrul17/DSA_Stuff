#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v = {3, 4, 5, 6};
    v.push_back(7);
    // v.push_back('s');
    v.pop_back();
    for (auto i : v)
    {
        cout << i << " ";
    }

    return 0;
}
#include <bits/stdc++.h>
using namespace std;

int main()
{
    // pair<int, int> p = {2, 3};
    // cout << p.first << " " << p.second;
    // pair<int, pair<int, int>> p = {2, {3, 13}};
    // cout << p.first << " " << p.second.first << " " << p.second.second;

    // pair<char, pair<int, int>> p = {'a', {2, 3}};
    // cout << p.first << " " << p.second.first;
    pair<int, int> p[] = {{2, 3}, {4, 5}, {6, 7}};
    int n = sizeof(p) / sizeof(p[0]);

    for (auto i : p)
    {
        cout << i.first << " " << i.second << " ";
    }

    return 0;
}
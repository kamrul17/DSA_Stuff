#include <iostream>
using namespace std;

int main()
{
    string s;
    cin >> s;
    // int hash[256] = {0};
    int hash[26] = {0};
    for (int i = 0; i < s.size(); i++)
    {
        hash[s[i] - 'a'] += 1;
        // hash[s[i]] += 1;
    }
    int q;
    cin >> q;
    while (q--)
    {
        char c;
        cin >> c;
        cout << hash[c - 'a'] << endl;
        // cout << hash[c] << endl;
    }
}
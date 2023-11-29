// given n string ,find unique string in lexigraphical order
#include <bits/stdc++.h>
using namespace std;
// void print(set<string> &s)
// {
//     for (auto &&i : s)
//     {
//         cout << i << " ";
//     }
// }
void print(multiset<string> &s)
{
    for (auto &&i : s)
    {
        cout << i << " ";
    }
}
/*int main()
{
    set<string> s;
    string str;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        s.insert(str);
    }
    for (auto i : s)
    {
        cout << i;
    }

    // print(s);

    return 0;
}*/

/*int main()
{
    unordered_set<string> s;
    string str;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        s.insert(str);
    }

    // print(s);
    string q = "abc";

    if (s.find("abc") == s.end())
    {
        cout << "no";
    }
    else
    {
        cout << "yes";
    }
    return 0;
}*/
int main()
{
    multiset<string> s;
    string str;
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> str;
        s.insert(str);
    }

    print(s);

    return 0;
}
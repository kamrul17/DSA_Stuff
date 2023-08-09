#include <bits/stdc++.h>
using namespace std;

int main()
{
    string s = "abcd";
    s[2] = '\0';
    s[5] = '\0';

    cout << s << endl;
    char ar[5];
    cin >> ar;
    ar[2] = '\0';
    ar[5] = '\0';
    cout << ar << endl;
    return 0;
}

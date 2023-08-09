#include <bits/stdc++.h>
using namespace std;
string reverseString(string s)
{
    stack<string> st;

    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        st.push(word);
    }
    string ans = "";
    while (!st.empty())
    {
        ans += st.top() + " ";
        st.pop();
        // cout << st.top() << " ";
        // st.pop();
    }
    return ans;
}
int main()
{
    string s = " hey how is your day";
    string ans = reverseString(s);
    cout << ans;
    return 0;
}

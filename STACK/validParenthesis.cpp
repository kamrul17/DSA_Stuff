#include <iostream>
#include <stack>
using namespace std;
bool validParenthesis(string s)
{
    stack<char> st;
    for (int i = 0; i < s.size(); i++)
    {
        char ch = s[i];
        //   if opening bracket then push
        if (ch == '{' || ch == '(' || ch == '[')
        {
            st.push(ch);
        }
        else
        {
            //  if closing bracket then pop but check for empty
            if (!st.empty())
            {
                char top = st.top();
                if ((ch == '}' && top == '{') ||
                    (ch == ')' && top == '(') ||
                    (ch == ']' && top == '['))
                {
                    st.pop();
                }
                else
                {
                    return false;
                }
            }
            else
            {
                return false;
            }
        }
    }
    if (st.empty())
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    string s = "{(())}";
    // validParenthesis(s);
    if (validParenthesis(s))
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }

    return 0;
}
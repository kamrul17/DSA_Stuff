#include <iostream>
#include <stack>
using namespace std;
bool findRedundantBrackets(string &s)
{
    stack<char> st;
    for (char i = 0; i < s.length(); i++)
    {
        char ch = s[i];
        //   if opening bracket or any operator is found
        if (ch == '(' || ch == '+' || ch == '*' || ch == '-' || ch == '/')
        {
            st.push(ch);
        }
        else
        {
            // if closing bracket is found then check whether between opening and closing bracket are there any operator is present or not
            if (ch == ')')
            {
                bool isRedundant = true;

                while (st.top() != '(')
                {
                    char top = st.top();
                    if (top == '+' || top == '*' || top == '-' || top == '/')
                    {
                        isRedundant = false;
                    }
                    st.pop();
                }
                if (isRedundant == true)
                {
                    return true;
                }
                st.pop();
            }
        }
    }
    return false;
}

int main()
{
    string s = "((c/d))";
    // string s = "(a*b+(c/d))";
    // string s = "(a+c*b)+(c))";

    if (findRedundantBrackets(s))
    {
        cout << "Redundant found" << endl;
    }
    else
    {
        cout << "NOT Redundant found" << endl;
    }

    return 0;
}
#include <iostream>
#include <stack>
using namespace std;
void reverseString(string name)
{
    stack<char> st;
    int size = name.size();
    for (int i = 0; i < size; i++)
    {
        char ch = name[i];
        st.push(ch);
    }
    while (!st.empty())
    {
        // char ch = st.top();
        cout << st.top() << endl;
        // cout << ch << endl;
        st.pop();
    }
}
int main()
{
    string name;
    cin >> name;
    reverseString(name);
    return 0;
}
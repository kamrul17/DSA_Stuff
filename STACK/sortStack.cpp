#include <iostream>
#include <stack>
using namespace std;
void sortStack(stack<int> &stack, int ele)
{
    if (stack.empty() || (!stack.empty() && stack.top() < ele))
    {
        stack.push(ele);
        return;
    }
    int num = stack.top();
    stack.pop();
    sortStack(stack, ele);
    stack.push(num);
}

void solve(stack<int> &stack)
{
    // base condition
    if (stack.empty())
    {
        return;
    }
    int num = stack.top();
    stack.pop();
    solve(stack);
    sortStack(stack, num);
}

int main()
{
    stack<int> st;
    st.push(245);
    st.push(3);
    st.push(4);
    st.push(5);

    solve(st);
    // insertEleAtBottom(st);
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
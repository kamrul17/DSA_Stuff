#include <iostream>
#include <stack>
using namespace std;
void insertAtBottom(stack<int> &stack, int element)
{
    // basecase
    if (stack.empty())
    {
        stack.push(element);
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call
    insertAtBottom(stack, element);

    stack.push(num);
}

void reverseStack(stack<int> &stack)
{
    if (stack.empty())
    {
        return;
    }

    int num = stack.top();
    stack.pop();

    // recursive call
    reverseStack(stack);
    insertAtBottom(stack, num);
}

int main()
{
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);

    reverseStack(st);
    // insertEleAtBottom(st);
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
#include <iostream>
#include <stack>
using namespace std;
void insertEleAtBottom(stack<int> &st, int element)
{
    // base case
    if (st.empty())
    {
        st.push(element);
        return;
    }
    int num = st.top();
    st.pop();
    insertEleAtBottom(st, element);
    st.push(num);
}
int main()
{
    stack<int> st;
    st.push(2);
    st.push(3);
    st.push(4);
    st.push(5);
    int ele;
    cin >> ele;
    insertEleAtBottom(st, ele);
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
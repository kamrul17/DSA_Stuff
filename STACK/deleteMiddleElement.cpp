#include <iostream>
#include <stack>
using namespace std;
// recursive approach
/*void deleteMiddleElement(stack<int> &st, int count, int size)
{

    int midIndex = size / 2;
    //    base case
    if (count == midIndex)
    {
        st.pop();
        return;
    }
    int num = st.top();
    st.pop();
    deleteMiddleElement(st, count + 1, size);
    st.push(num);
}*/
// brute force
void deleteMiddleElement(stack<int> &st, int size)
{
    stack<int> tempStk;
    int midIndex = size / 2;
    for (int i = 0; i < midIndex; i++)
    {
        tempStk.push(st.top());
        st.pop();
    }
    st.pop();
    while (!tempStk.empty())
    {
        st.push(tempStk.top());
        tempStk.pop();
    }
}
int main()
{
    stack<int> st;
    st.push(1);
    st.push(2);
    st.push(3);
    st.push(4);
    int size = st.size();
    // int count = 0;
    // deleteMiddleElement(st, count, size);
    deleteMiddleElement(st, size);
    while (!st.empty())
    {
        cout << st.top() << endl;
        st.pop();
    }

    return 0;
}
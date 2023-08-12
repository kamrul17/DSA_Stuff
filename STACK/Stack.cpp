#include <iostream>
#include <stack>
using namespace std;

class Stack
{
public:
    int *arr;
    int size;
    int top;
    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        top = -1;
    }
    void push(int element)
    {
        if (size - top > 1)
        {
            top++;
            arr[top] = element;
        }
        else
        {
            cout << "Stack overflow" << endl;
        }
    }
    void pop()
    {
        if (top >= 0)
        {
            top--;
        }
        else
        {
            cout << "Stack underflow" << endl;
        }
    }
    int peek()
    {
        if (top >= 0)
        {
            return arr[top];
        }
        else
        {
            cout << "Stack is empty" << endl;
            return -1;
        }
    }
    bool isEmpty()
    {
        if (top == -1)
        {
            return true;
        }
        else
        {
            return false;
        }
    }
};

int main()
{
    // stack<int> s;
    // s.push(21);
    // s.push(22);
    // s.push(24);
    // s.push(25);
    // cout << s.size();

    Stack st(5);
    st.push(21);
    st.push(22);
    st.push(23);
    st.push(24);
    st.push(24);

    cout << "Peek element : " << st.peek() << endl;
    st.pop();
    cout << "Peek element : " << st.peek() << endl;
    st.pop();
    cout << "Peek element : " << st.peek() << endl;
    st.pop();
    cout << "Peek element : " << st.peek() << endl;
    st.pop();
    cout << "Peek element : " << st.peek() << endl;

    if (st.isEmpty())
    {
        cout << "STACK IS EMPTY" << endl;
    }
    else
    {
        cout << "STACK IS NOT EMPTY" << endl;
    }

    return 0;
}
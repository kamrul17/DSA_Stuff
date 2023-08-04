
#include <iostream>
using namespace std;
void swapNum(int a, int b)
{
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    cout << "a :" << a << " "
         << "b :" << b;
}
int main()
{
    int a = 5, b = 7;

    cout << "before swap" << endl;
    cout << "a :" << a << "  "
         << "b :" << b << endl;

    cout << "after swap" << endl;
    swapNum(a, b);
    return 0;
}
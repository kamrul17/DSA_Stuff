// check n is odd  or even

#include <iostream>
using namespace std;
bool checkSetOrNot(int n, int i)
{
    int mask = 1 << i;
    if (mask & n)
    {

        return true;
    }
    return false;
}
int main()
{
    int n;
    cin >> n;
    int i;
    cin >> i;
    if (checkSetOrNot(n, i))
    {
        cout << "set";
    }
    else
    {
        cout << "not set";
    }

    return 0;
}

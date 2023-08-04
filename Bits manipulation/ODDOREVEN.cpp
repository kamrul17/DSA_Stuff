// check n is odd  or even

#include <iostream>
using namespace std;
void checkODDorEVEN(int n)
{
    if (n & 1)
    {
        cout << "ODD " << endl;
    }
    else
    {
        cout << "EVEN " << endl;
    }
}
int main()
{
    int n;
    cin >> n;
    checkODDorEVEN(n);
    return 0;
}

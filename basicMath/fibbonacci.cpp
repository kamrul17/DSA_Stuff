#include <iostream>
using namespace std;
void fibbonacci(int n)
{
    int a = 0;
    int b = 1;
    int c;
    if (n == 0)
    {
        cout << a;
    }

    for (int i = 0; i < n; i++)
    {
        c = a + b;
        // finding last two digit
        // c = a + b % 100;
        a = b;
        b = c;
        cout << b << " ";
    }
    // finding last two digit
    // cout << b << " ";
}

int main()
{

    int n;
    cin >> n;
    fibbonacci(n);

    return 0;
}
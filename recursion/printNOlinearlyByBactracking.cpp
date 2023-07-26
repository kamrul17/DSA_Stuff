#include <bits/stdc++.h>
using namespace std;
void printN(int i, int n)
{
    if (i < 1)
    {
        return;
    }

    // cout before func will get output in linear order
    cout << i << endl;
    printN(i - 1, n);
    // cout after func will get output in linear order
    cout << i << endl;
}

int main()
{
    int n;
    cin >> n;
    printN(n, n);
    return 0;
}

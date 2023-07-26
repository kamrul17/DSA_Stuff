#include <bits/stdc++.h>
using namespace std;
void printN(int i, int n)
{
    if (i > n)
    {
        return;
    }
    cout << "coding ninjas" << endl;
    printN(i + 1, n);
}

int main()
{
    int n;
    cin >> n;
    printN(1, n);
    return 0;
}
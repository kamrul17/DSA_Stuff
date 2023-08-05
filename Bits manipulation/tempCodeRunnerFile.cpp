#include <iostream>
using namespace std;
void setBit(int n, int i)
{
    int mask = ~(1 << i);
    n = n & mask;
    cout << n;
}
int main()
{
    int n;
    cin >> n;
    int i;
    cin >> i;
    setBit(n, i);

    return 0;
}
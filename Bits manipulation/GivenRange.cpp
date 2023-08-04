// Given range (L=2 and R=4),find xor of between 2 and 4

#include <iostream>
using namespace std;
int printXor2(int L, int R)
{
    int xor1 = 0;
    while (L <= R)
    {
        xor1 = xor1 ^ L;
        L++;
    }
    return xor1;
}
int main()
{
    int L, R;
    cin >> L;
    cin >> R;

    int ans = printXor2(L, R);
    cout << ans;

    return 0;
}
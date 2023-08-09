#include <iostream>
using namespace std;
void solve(int n, int i)
{
    // find ith position
    // int mask = 1 << i-1;
    // int ans = (n & mask) >> i;
    // cout << ans;
    // set at position
    int ans1 = n | (1 << i - 1);
    cout << ans1 << endl;
    // clear ith position
    int ans2 = n & ~(1 << i - 1);
    cout << ans2 << endl;
}
int main()
{
    int n, i;
    cin >> n >> i;
    solve(n, i);
    // int ans = solve(n, i);
    // cout << ans;

    return 0;
}
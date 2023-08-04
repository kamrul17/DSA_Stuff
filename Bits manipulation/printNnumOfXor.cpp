// print
#include <iostream>
using namespace std;
// tc=O(N);
// int printXor1(int n)
// {
//     int xor1 = 0;
//     for (int i = 1; i <= n; i++)
//     {
//         xor1 = xor1 ^ i;
//     }
//     return xor1;
// }
// tc=(1);
void printXor2(int n)
{
    if (n % 4 == 0)
    {
        cout << n;
    }
    else if (n % 4 == 1)
    {
        cout << "1";
    }
    else if (n % 4 == 2)
    {
        cout << n + 1;
    }
    else if (n % 4 == 3)
    {
        cout << "0";
    }
}
int main()
{
    int n = 9;
    // int ans1 = printXor1(n);
    printXor2(n);
    // cout << ans1;

    return 0;
}
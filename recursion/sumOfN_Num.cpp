// sum of N Number
#include <bits/stdc++.h>
using namespace std;
void sumN(int n)
{
    // int sum = 0;
    // for (int i = 1; i <= n; i++)
    // {
    //     sum += i;
    // }
    int sum = n * (n + 1) / 2;
    ;
    cout << sum;
}

int main()
{
    int n;
    cin >> n;
    sumN(n);
    return 0;
}

// parameterized way
// #include <bits/stdc++.h>
// using namespace std;
// void sumN(int n, int sum)
// {
//     if (n < 1)
//     {
//         cout << sum;
//         return;
//     }
//     sumN(n - 1, sum + n);
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int sum = 0;
//     sumN(n, 0);
//     return 0;
// }
// #include <bits/stdc++.h>
// using namespace std;
// void factorial(int n)
// {
//     int ans = 1;
//     for (int i = 1; i <= n; i++)
//     {
//         ans = ans * i;
//     }
//     cout << ans;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     factorial(n);
//     return 0;
// }
// recursive way
#include <bits/stdc++.h>
using namespace std;
int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    return n * factorial(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << factorial(n);
    return 0;
}
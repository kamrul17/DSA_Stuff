// clear the ith bit of a number=0

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

// Count the no.of set bits in a number
// #include <iostream>
// using namespace std;
// int countBit(int n)
// {
//     int cnt = 0;
//     while (n != 0)
//     {
//         n = n & (n - 1);
//         cnt++;
//     }
//     return cnt;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int ans = countBit(n);
//     cout << ans;
//     return 0;
// }

// check the number is a power of 2

// #include <iostream>
// using namespace std;
// void setBit(int n)
// {

//     if (n & (n - 1))
//     {
//         cout << "NOT ,number is not a power of two";
//     }
//     else
//     {
//         cout << "YES ,number is  a power of two";
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;

//     setBit(n);

//     return 0;
// }
// reverse the last set bit i.e,number=1->0

// #include <iostream>
// using namespace std;
// void setBit(int n)
// {

//     n = n & (n - 1);
//     cout << n;
// }
// int main()
// {
//     int n;
//     cin >> n;

//     setBit(n);

//     return 0;
// }
// set the ith bit of a number=1
// #include <iostream>
// using namespace std;
// void setBit(int n, int i)
// {
//     int mask = 1 << i;
//     n = n | mask;
//     cout << n;
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int i;
//     cin >> i;
//     setBit(n, i);

//     return 0;
// }

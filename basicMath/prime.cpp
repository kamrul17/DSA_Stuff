#include <bits/stdc++.h>

using namespace std;

bool isPrime(int N)
{
    for (int i = 2; i <= sqrt(N); i++)
    {
        if (N % i == 0)
        {
            return false;
        }
    }
    return true;
}
int main()
{

    int n = 17;

    bool ans = isPrime(n);
    if (n != 1 && ans == true)
    {
        cout << "Prime Number";
    }
    else
    {
        cout << "Non Prime Number";
    }
    return 0;
}

// #include <bits/stdc++.h>
// using namespace std;

// bool primeNum(int num)
// {
//     for (int i = 2; i < sqrt(num); i++)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
//     for (int i = 2; i < num; i++)
//     {
//         if (num % i == 0)
//         {
//             return false;
//         }
//     }
//     return true;
// }

// int main()
// {

//     int num;
//     cin >> num;
//     if (primeNum(num))
//     {
//         cout << "PRIME";
//     }
//     else
//     {
//         cout << "NOT PRIME";
//     }

//     return 0;
// }
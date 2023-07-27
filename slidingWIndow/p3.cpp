// using SLIDING WINDOW
#include <bits/stdc++.h>
using namespace std;

void solve(int arr[], int n, int k)
{
    list<int> li;

    int i = 0, j = 0;
    while (j < n)
    {
        if (arr[j] < 0)
        {
            li.push_back(arr[j]);
        }
        if ((j - i + 1) < k)
        {
            j++;
        }
        else if ((j - i + 1) == k)
        {
            if (li.size() == 0)
            {
                li.push_back(0);
            }
            else
            {
                li.push_front(arr[j]);

                li.pop_front();
                i++;
                j++;
            }
        }
    }

    list<int>::iterator it;
    for (it = li.begin(); it != li.end(); ++it)
        cout << '\t' << *it;
}
int main()
{
    // int arr[] = {1, -2, -3, -4, 5, 6, 7};
    int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int k = 3;
    solve(arr, n, k);

    return 0;
}

// FIRST NEGATIVE INTEGER IN EVRY WINDOW OF SIZE K
// BRUTE FORCE
// #include <iostream>
// using namespace std;

// void solve(int arr[], int n, int k)
// {
//     for (int i = 0; i <= n - k; i++)
//     {
//         int firstNegtiveNUmber = -1;
//         for (int j = i; j < i + k; j++)
//         {
//             if (arr[j] < 0)
//             {
//                 firstNegtiveNUmber = arr[j];
//                 break;
//             }
//         }
//         cout << firstNegtiveNUmber << " ";
//     }
// }
// int main()
// {
//     int arr[] = {1, -2, 3, -4, 5, -6, 7};
//     int n = sizeof(arr) / sizeof(arr[0]);
//     int k = 3;
//     solve(arr, n, k);

//     return 0;
// }
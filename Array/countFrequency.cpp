#include <iostream>
#include <vector>
using namespace std;
int main()
{

    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    // int maxi = arr[0];
    // for (int i = 0; i < n; i++)
    // {
    //     if (arr[i] > maxi)
    //     {
    //         maxi = arr[i];
    //     }
    // }
    int ma = 0;
    for (int i = 0; i < n; i++)
    {
        ma = max(ma, arr[i]);
    }
    cout << ma;
    // cout << maxi;
    int frequency[ma + 1] = {0};
    for (int i = 0; i < n; i++)
    {
        frequency[arr[i]]++;
    }
    for (int i = 0; i < ma + 1; i++)
    {
        if (frequency[i] != 0)
        {
            cout << i << " -> " << frequency[i];
        }
    }

    return 0;
}

// void countFreq(int arr[], int n)
// {
//     vector<bool> visited(n, false);

//     for (int i = 0; i < n; i++)
//     {
//         if (visited[i] == true)
//         {
//             continue;
//         }
//         int count = 1;
//         for (int j = i + 1; j < n; j++)
//         {
//             if (arr[i] == arr[j])
//             {
//                 visited[j] = true;
//                 count++;
//             }
//         }
//         cout << arr[i] << "->" << count << endl;
//     }
// }
// int main()
// {
// int arr[] = {10, 5, 10, 15, 10, 5};
// int n = sizeof(arr) / sizeof(arr[0]);
// countFreq(arr, n);
// return 0;
// int n;
// cin >> n;
// int arr[n];
// for (int i = 0; i < n; i++)
// {
//     cin >> arr[i];
// }
// countFreq(arr, n);
//     return 0;
// }

/*
Time Complexity : O(n2)
Auxiliary Space : O(n)
*/

// #include <iostream>
// #include <map>
// using namespace std;
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }

//     map<int, int> m;
//     for (int i = 0; i < n; i++)
//     {
//         m[arr[i]]++;
//     }
//     for (auto it : m)
//     {
//         cout << it.first << " " << it.second << endl;
//     }
//     return 0;
// }

/*
Time Complexity : O(n2)
Auxiliary Space : O(n)
*/
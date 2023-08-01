// maximum of all subarray of size k
// BRUTE FORCE
/*#include <bits/stdc++.h>
using namespace std;

void findMaxOfSubarrays(int arr[], int n, int k)
{


    for (int i = 0; i <= n - k; ++i)
    {
        int maxInSubarray = arr[i];
        for (int j = i + 1; j < i + k; ++j)
        {
            if (arr[j] > maxInSubarray)
            {
                maxInSubarray = arr[j];
            }
        }
        cout << maxInSubarray << " ";
    }
}

int main()
{
    int k = 3;
    int arr[] = {2, 9, 5, 6, 2, 3, 8};
    int n = sizeof(arr) / sizeof(int);
    findMaxOfSubarrays(arr, n, k);

    return 0;
}*/
// SLIDING WINDOW

// MAXIMUM SUM SUBARRAY OF SIZE K
#include <iostream>
using namespace std;

vector<int> max_of_subarrays(vector<int> arr, int n, int k)
{
    // your code here
    deque<int> q;
    int i = 0, j = 0;
    vector<int> res;
    while (j < n)
    {
        while (!q.empty() && q.back() < arr[j])
            q.pop_back();
        q.push_back(arr[j]);
        if (j - i + 1 < k)
            j++;
        else if (j - i + 1 == k)
        {
            res.push_back(q.front());
            if (q.front() == arr[i])
                q.pop_front();
            i++;
            j++;
        }
    }
    return res;
}

int main()
{
    int arr[] = {2, 3, 1, 3, 4, 5, 9};
    int n = sizeof(arr) / sizeof(int);
    int k = 3;
    int sum = solve(arr, n, k);
    cout << sum;
    return 0;
}
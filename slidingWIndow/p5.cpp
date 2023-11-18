// maximum of all subarray of size k
// BRUTE FORCE
#include <bits/stdc++.h>
using namespace std;
/*
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
    int k = 1;
    int arr[] = {2};
    // int k = 3;
    // int arr[] = {2, 9, 5, 6, 2, 3, 8};
    int n = sizeof(arr) / sizeof(int);
    findMaxOfSubarrays(arr, n, k);

    return 0;
}*/
// SLIDING WINDOW

// MAXIMUM SUM SUBARRAY OF SIZE K

vector<int> max_of_subarrays(vector<int> arr, int n, int k)
{
    // your code here
    deque<int> q;
    int i = 0, j = 0;
    vector<int> res;
    while (j < n - 1)
    {
        while (!q.empty() && q.back() < arr[j])
        {
            q.pop_back();
        }

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
    vector<int> arr = {8, 5, 10, 7, 9, 4, 15, 12, 90, 13};
    int n = arr.size();
    int k = 3;
    vector<int> ans = max_of_subarrays(arr, n, k);
    for (auto i : ans)
    {
        std::cout << i << " ";
    }

    return 0;
}
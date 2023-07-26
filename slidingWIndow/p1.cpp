// brute force
#include <iostream>
using namespace std;

int solve(int arr[], int n, int k)
{
    int maxSum = 0;
    for (int i = 0; i <= n - k; i++)
    {
        int sum = 0;
        for (int j = i; j < i + k; j++)
        {
            sum += arr[j];
        }
        maxSum = max(maxSum, sum);
    }
    return maxSum;
}
int main()
{
    int arr[] = {2, 3, 1, 3, 4, 5, 6, 3};
    int n = sizeof(arr) / sizeof(int);
    int k = 3;
    int sum = solve(arr, n, k);
    cout << sum;
    return 0;
}
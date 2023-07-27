
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
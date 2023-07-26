// MAXIMUM SUM SUBARRAY OF SIZE K
#include <iostream>
using namespace std;

int solve(int arr[], int n, int k)
{
    int i = 0;
    int j = 0;
    int maxSum = INT8_MIN;
    int sum = 0;
    while (j < n)
    {
        sum = sum + arr[j];
        if ((j - i + 1) < k)
        {
            j++;
        }
        else if ((j - i + 1) == k)
        {
            maxSum = max(maxSum, sum);
            sum = sum - arr[i];
            i++;
            j++;
        }
    }
    return maxSum;
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
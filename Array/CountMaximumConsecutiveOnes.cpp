#include <iostream>
using namespace std;

int findMaxConsecutiveOnes(int arr[], int n)
{
    int count = 0, maxCount = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 1)
        {
            count++;
        }
        else
        {
            count = 0;
        }
        maxCount = max(maxCount, count);
    }
    return maxCount;
}
int main()
{
    int arr[] = {1, 1, 1, 1, 0, 1, 1, 1};
    int n = sizeof(arr) / sizeof(int);

    int ans = findMaxConsecutiveOnes(arr, n);
    cout << "The maximum  consecutive 1's are " << ans;
    return 0;
}
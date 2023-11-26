#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int minSwapOperations(std::vector<int> &arr)
{
    int n = arr.size();
    int ascCount = 0, descCount = 0;

    // Count the number of elements in ascending and descending order
    for (int i = 0; i < n - 1; ++i)
    {
        for (int i = 0; i < n - 1; ++i)
        {
            if (arr[i] < arr[i + 1])
                ascCount++;
            else if (arr[i] > arr[i + 1])
                descCount++;
        }
    }

    // Minimum swap operations required will be the minimum of ascCount and descCount
    return min(ascCount, descCount);
}

int main()
{
    int N;
    cin >> N;

    vector<int> arr(N);
    for (int i = 0; i < N; ++i)
    {
        cin >> arr[i];
    }

    int result = minSwapOperations(arr);
    cout << result << endl;

    return 0;
}

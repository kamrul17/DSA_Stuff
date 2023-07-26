#include <iostream>
using namespace std;

int secondSmallest(int *arr, int n)
{
    int smallest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
        }
    }
    int sSmall = INT8_MAX;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] < sSmall && arr[i] != smallest)
        {
            sSmall = arr[i];
        }
    }

    return sSmall;
}
int secondLargest(int *arr, int n)
{
    int largest = arr[0];

    for (int i = 0; i < n; i++)
    {
        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    int slarge = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] > slarge && arr[i] != largest)
        {
            slarge = arr[i];
        }
    }

    return slarge;
}
int main()
{
    int arr[] = {2, 1, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int sLargest = secondLargest(arr, n);
    // int sSmallest = secondSmallest(arr, n);
    // cout << sSmallest;
    cout << sLargest;
    return 0;
}
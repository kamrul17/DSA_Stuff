// NEARLY SORTED MEANS =>ELEMENT CAN BE FOUND IN (ith index,i-1,i+1)
#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int ele)
{
    int s = 0;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        if (arr[mid] == ele)
        {
            return mid;
        }
        else if (mid - 1 >= s && arr[mid - 1] == ele)
        {
            return mid - 1;
        }
        else if (mid + 1 <= e && arr[mid + 1] == ele)
        {
            return mid + 1;
        }
        if (ele < arr[mid])
        {
            e = mid - 2;
        }
        else
        {
            s = mid + 2;
        }
    }
    return -1;
}

int main()
{

    int arr[] = {5, 10, 15, 20, 40, 90};

    int n = sizeof(arr) / sizeof(int);

    int result = binarySearch(arr, n, 90);
    cout << result;
    return 0;
}

#include <iostream>
using namespace std;

int FloorOfAnEle(int arr[], int n, int ele)
{
    int s = 0;
    int e = n - 1;
    int result = -1;
    while (s <= e)
    {

        int mid = s + (e - s) / 2;
        if (arr[mid] == ele)
        {
            return arr[mid];
        }
        if (arr[mid] < ele)
        {
            result = arr[mid];
            s = mid + 1;
        }
        else if (arr[mid] > ele)
        {
            e = mid - 1;
        }
    }
    return result;
}
int main()
{
    int arr[] = {1, 2, 8, 10, 12, 19};
    int n = sizeof(arr) / sizeof(int);

    int floor_value = FloorOfAnEle(arr, n, 10);
    cout << floor_value;
    return 0;
}
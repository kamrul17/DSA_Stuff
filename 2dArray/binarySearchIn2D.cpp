#include <iostream>
using namespace std;
bool binarySearch(int arr[][4], int rows, int cols, int target)
{
    int start = 0;
    int end = rows * cols - 1;
    int mid = start + (end - start) / 2;
    while (start <= end)
    {
        int element = arr[mid / cols][mid % cols];
        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
        mid = start + (end - start) / 2;
    }
    return 0;
}
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int rows = sizeof(arr) / sizeof(arr[0]);       // Calculate number of rows
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]); // Calculate number of cols
    int target;
    cin >> target;
    if (binarySearch(arr, rows, cols, target))
    {
        cout << "ELEMENT FOUND";
    }
    else
    {
        cout << "NOT FOUND";
    }
    return 0;
}
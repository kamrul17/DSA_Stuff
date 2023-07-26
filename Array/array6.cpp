#include <iostream>
using namespace std;
#include <algorithm>
void sortArray(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        int minIndex = i;
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[minIndex])
            {
                minIndex = j;
            }
        }

        swap(arr[minIndex], arr[i]);
    }
}

// void printArray(int arr[], int n)
// {
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }
int main()
{
    int arr[6] = {1, 2, 3, 5, 9, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    sortArray(arr, n);
    for (int i = 0; i < n / 2; i++)
    {
        cout << arr[i] << " ";
    }
    for (int i = n - 1; i >= n / 2; i--)
    {
        cout << arr[i] << " ";
    }

    // printArray(arr, 6);
    // sort(arr, arr + 6);
    // for (int i = 0; i < 6; i++)
    // {
    //     cout << arr[i] << " ";
    // }
}
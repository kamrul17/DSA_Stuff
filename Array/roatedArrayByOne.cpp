#include <iostream>
using namespace std;
// void rotateArray(int arr[], int n)
// {
//     int temp[n];
//     for (int i = 1; i < n; i++)
//     {
//         temp[i - 1] = arr[i];
//     }
//     temp[n - 1] = arr[0];
//     for (int i = 0; i < n; i++)
//     {
//         cout << temp[i] << endl;
//     }
// }

void rotateArray1(int *arr, int n)
{
    int temp = arr[0];
    for (int i = 1; i < n; i++)
    {
        arr[i - 1] = arr[i];
    }
    arr[n - 1] = temp;
}
int main()
{
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    // rotateArray(arr, n);
    rotateArray1(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
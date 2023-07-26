#include <bits/stdc++.h>
#include <iostream>
using namespace std;
void Rotatetoright(int *arr, int n, int k)
{
    k = k % n;
    int temp[k];
    // storing values upto k index into the temp array
    for (int i = 0; i < k; i++)
    {
        temp[i] = arr[i];
    }
    // shifting
    for (int i = k; i < n; i++)
    {
        arr[i - k] = arr[i];
    }
    // put back temp array
    for (int i = n - k; i < n; i++)
    {
        arr[i] = temp[i - (n - k)];
    }
}
// optimal approach
// void Reverse(int arr[], int start, int end)
// {
//     while (start <= end)
//     {
//         int temp = arr[start];
//         arr[start] = arr[end];
//         arr[end] = temp;
//         start++;
//         end--;
//     }
// }
// void Rotatetoright(int arr[], int n, int k)
// {
//     // Reverse first k elements
//     Reverse(arr, 0, k - 1);
//     // Reverse last n-k elements
//     Reverse(arr, k, n - 1);
//     // Reverse whole array
//     Reverse(arr, 0, n - 1);
// }
int main()
{
    int n = 2;
    // int n = 7;
    int arr[] = {1, 2};
    // int arr[] = {1, 2, 3, 4, 5, 6, 7};
    int k = 1;
    Rotatetoright(arr, n, k);
    cout << "After Rotating the elements to right " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}
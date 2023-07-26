/*Time Complexity: O(n)
Space Complexity: O(1)*/
#include <iostream>
using namespace std;
void printArray(int arr[], int n)
{
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}
void revrseArray(int arr[], int n)
{
    int start = 0;
    int end = n - 1;
    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}
int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    revrseArray(arr, n);
    printArray(arr, n);
}

// #include <iostream>
// using namespace std;

// void revrseArray(int arr[], int n)
// {

//     for (int i = n - 1; i >= 0; i--)
//     {
//         cout << arr[i] << endl;
//     }
// }
// int main()
// {
//     int n;
//     cin >> n;
//     int arr[n];
//     for (int i = 0; i < n; i++)
//     {
//         cin >> arr[i];
//     }
//     revrseArray(arr, n);
// }
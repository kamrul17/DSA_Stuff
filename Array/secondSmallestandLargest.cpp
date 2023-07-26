#include <iostream>
#include <algorithm>

using namespace std;

int main()
{

    int arr[] = {5, 4, 3, 7, 2, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    sort(arr, arr + n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    int secondSmallest = arr[1];
    int secondlargest = arr[n - 2];
    cout << "the second smalllest number is :" << secondSmallest << endl;
    cout << "the second largest number is :" << secondlargest << endl;
    return 0;
}
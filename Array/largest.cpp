#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3, 2, 4, 1, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = arr[0];
    for (int i = 0; i < n; i++)
    {

        if (arr[i] > largest)
        {
            largest = arr[i];
        }
    }
    cout << largest;
    return 0;
}
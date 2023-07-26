#include <iostream>
using namespace std;
int sortedOrNOt(int *arr, int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
        }
        else
        {
            return false;
        }
    }
    return true;
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
    int sorted = sortedOrNOt(arr, n);
    if (sorted == true)
    {
        cout << "array is sorted " << endl;
    }
    else
    {
        cout << "array is NOT sorted " << endl;
    }
}
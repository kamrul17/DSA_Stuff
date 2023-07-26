#include <iostream>
using namespace std;
bool isArraySorted(int arr[], int n)
{
    for (int i = 1; i < n; i++)
    {
        if (arr[i] >= arr[i - 1])
        {
            /* code */
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
    int arr[] = {1, 2, 3, 4, 5};
    int n = 5;
    if (isArraySorted(arr, n))
    {
        cout << "true";
    }
    else
    {
        cout << "false";
    }

    return 0;
}
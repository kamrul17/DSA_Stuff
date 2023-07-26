// BRUTE FORCE

/*#include <iostream>
using namespace std;

void solve(int arr[], int n)
{
    int nonZeroIndex = 0;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] != 0)
        {
            arr[nonZeroIndex++] = arr[i];
        }
    }
    for (int i = nonZeroIndex; i < n; i++)
    {
        arr[i] = 0;
    }
}
int main()
{
    int arr[] = {1, 2, 0, 3, 0, 9, 0, 1};
    int n = sizeof(arr) / sizeof(int);
    solve(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}*/
#include <iostream>
using namespace std;

void solve(int arr[], int n)
{
    // j indicate zero first zero index
    int j = -1;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == 0)
        {
            j = i;
            break;
        }
    }
    // if there is no zero
    if (j == -1)
    {
        return;
    }

    for (int i = j + 1; i < n; i++)
    {
        if (arr[i] != 0)
        {
            swap(arr[j++], arr[i]);
        }
    }
}
int main()
{
    int arr[] = {1, 2, 20, 23, 20, 9, 30, 1};
    int n = sizeof(arr) / sizeof(int);
    solve(arr, n);
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
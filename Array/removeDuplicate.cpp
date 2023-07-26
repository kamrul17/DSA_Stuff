#include <iostream>
#include <bits/stdc++.h>
using namespace std;
// TWO POINTER APPROACH
int removeDuplicate(int arr[], int n)
{
    int i = 0;
    for (int j = 1; j < n; j++)
    {
        if (arr[j] != arr[i])
        {
            arr[i + 1] = arr[j];
            i++;
        }
    }
    return i + 1;
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
    int finalArray = removeDuplicate(arr, n);
    cout << finalArray;
    cout << endl;
    for (int i = 0; i < finalArray; i++)
    {
        cout << arr[i];
    }
    return 0;
}
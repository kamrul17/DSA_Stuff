#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 1, 1, 5, 1};
    int n = sizeof(arr) / sizeof(int);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum += arr[i];
    }
    cout << sum << " ";
}
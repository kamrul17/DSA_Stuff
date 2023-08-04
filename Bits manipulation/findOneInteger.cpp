// given an arr where ever integer occurs twice and one integer occcur once,print that once integer;
#include <iostream>
using namespace std;
int findInteger(int arr[], int n)
{
    int xor1 = 0;
    for (int i = 0; i < n; i++)
    {
        xor1 = xor1 ^ arr[i];
    }
    return xor1;
}
int main()
{
    int arr[] = {2, 99, 2, 5, 6, 5, 7, 7, 6};
    int n = sizeof(arr) / sizeof(int);
    int ans = findInteger(arr, n);
    cout << ans;
    return 0;
}
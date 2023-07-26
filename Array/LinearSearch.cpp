#include <iostream>
using namespace std;

int findEleIndex(int arr[], int size, int ele)
{
    int index = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == ele)
        {
            index = i;
        }
    }
    return index;
}
int main()
{
    int arr[] = {1, 2, 23, 4, 5, 6};
    int size = sizeof(arr) / sizeof(int);
    int ele = 1;
    int ans = findEleIndex(arr, size, ele);
    cout << "element index is: " << ans;
    return 0;
}
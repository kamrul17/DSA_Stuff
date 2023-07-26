#include <iostream>
using namespace std;

int rotateNoOFTimes(int arr[], int n)
{

    int s = 0;
    int e = n - 1;

    while (s <= e)
    {

        if (arr[s] <= arr[e])
        {
            return s;
        }

        int mid = s + (e - s) / 2;
        int next = (mid + 1) % n;
        int prev = (mid + n - 1) % n;

        if (arr[mid] <= arr[next] && arr[mid] <= arr[prev])
        {
            return mid;
        }

        else if (arr[mid] >= arr[s])
        {
            s = mid + 1;
        }
        else if (arr[mid] <= arr[e])
        {
            e = mid - 1;
        }
    }

    return -1;
}

int binarySearchOnfirstLeftPart(int arr[], int smallestELe, int key)
{

    int s = 0;
    int e = smallestELe - 1;
    while (s <= e)
    {
        int mid = s + (e + s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key <= arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}
int binarySearchOnfirstRightPart(int arr[], int smallestELe, int key, int n)
{
    cout << "binarySearchOnSecondLeftPart";
    int s = smallestELe;
    int e = n - 1;
    while (s <= e)
    {
        int mid = s + (e + s) / 2;
        if (arr[mid] == key)
        {
            return mid;
        }
        if (key <= arr[mid])
        {
            e = mid - 1;
        }
        else
        {
            s = mid + 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {4, 1, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int NoOfRotation = rotateNoOFTimes(arr, n);
    // cout << "Count of an Element in SORTED ARRAY: " << NoOfRotation;
    int val1 = binarySearchOnfirstLeftPart(arr, NoOfRotation, 2);
    int val2 = binarySearchOnfirstRightPart(arr, NoOfRotation, 2, n);
    if (val1 >= 0)
    {
        cout << "element in rotate sorted array " << val1 << endl;
    }
    else
    {
        cout << "element in rotate sorted array " << val2 << endl;
    }

    return 0;
}

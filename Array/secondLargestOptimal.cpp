#include <iostream>
using namespace std;
int secondlarge(int *arr, int n)
{
    int largest = arr[0];
    // if array contain negative no. take INT_MIN Instead of -1
    int Secondlargest = -1;
    int i;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > largest)
        {

            Secondlargest = largest;
            largest = arr[i];
        }
        else if (arr[i] < largest && arr[i] > Secondlargest)
        {
            Secondlargest = arr[i];
        }
    }
    return Secondlargest;
}
int secondsmall(int *arr, int n)
{
    int smallest = arr[0];
    int Secondsmallest = INT8_MAX;
    int i;
    for (int i = 1; i < n; i++)
    {
        if (arr[i] < smallest)
        {

            Secondsmallest = smallest;
            smallest = arr[i];
        }
        else if (arr[i] != smallest && arr[i] < Secondsmallest)
        {
            Secondsmallest = arr[i];
        }
    }
    return Secondsmallest;
}
int main()
{
    int arr[] = {3, 22, 4, 1, 6, 7};
    int n = sizeof(arr) / sizeof(arr[0]);
    int Secondlargest = secondlarge(arr, n);
    int SecondSmallest = secondsmall(arr, n);
    cout << Secondlargest;
    cout << endl;
    cout << SecondSmallest;

    return 0;
}
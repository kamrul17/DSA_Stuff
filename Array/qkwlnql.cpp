#include <iostream>
#include <string>
using namespace std;
const int MAX_SIZE = 100;

bool isElementInArray(string arr[], int size, string &element)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == element)
        {
            return true;
        }
    }
    return false;
}

int main()
{
    // int size1;
    // int size2;

    // string arr1[size1];

    // string arr2[size2];
    // cin >> size1;
    // for (int i = 0; i < size1; i++)
    // {
    //     cin >> arr1[i];
    // }
    // cout << endl;

    // for (int i = 0; i < size2; i++)
    // {
    //     cin >> arr2[i];
    // }

    string arr1[] = {"apple", "banana", "orange", "kiwi"};
    int size1 = sizeof(arr1) / sizeof(arr1[0]);

    string arr2[] = {"banana", "orange", "grape", "peach"};
    int size2 = sizeof(arr2) / sizeof(arr2[0]);

    string difference[MAX_SIZE];
    int diffIndex = 0;

    // Find elements in arr1 that are not present in arr2
    for (int i = 0; i < size1; i++)
    {
        if (!isElementInArray(arr2, size2, arr1[i]))
        {
            difference[diffIndex] = arr1[i];
            diffIndex++;
        }
    }

    // Find elements in arr2 that are not present in arr1
    for (int i = 0; i < size2; i++)
    {
        if (!isElementInArray(arr1, size1, arr2[i]))
        {
            difference[diffIndex] = arr2[i];
            diffIndex++;
        }
    }

    cout << "Difference: ";
    for (int i = 0; i < diffIndex; i++)
    {
        cout << difference[i] << " ";
    }
    cout << endl;

    return 0;
}

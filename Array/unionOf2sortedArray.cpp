// BRUTE FORCE
/*#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int size1 = sizeof(arr1) / sizeof(int);
    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int size2 = sizeof(arr2) / sizeof(int);
    set<int> st;
    for (int i = 0; i < size1; i++)
    {
        st.insert(arr1[i]);
    }
    for (int i = 0; i < size2; i++)
    {
        st.insert(arr2[i]);
    }
    int Union[st.size()];
    int i = 0;
    for (auto it : st)
    {
        Union[i++] = it;
    }
    for (int i = 0; i < st.size(); i++)
    {
        cout << Union[i] << " ";
    }

    return 0;
}*/
// TWO POINTER

#include <iostream>
using namespace std;

// Function to find the union of two sorted arrays
void findUnion(int arr1[], int n1, int arr2[], int n2)
{
    int i = 0, j = 0;

    // Traverse both arrays
    while (i < n1 && j < n2)
    {
        // If the current elements are equal, print any of them and move both pointers
        if (arr1[i] == arr2[j])
        {
            if (i == 0 || arr1[i] != arr1[i - 1])
            {
                cout << arr1[i] << " ";
            }
            i++;
            j++;
        }
        // If the element in the first array is smaller, print it and move its pointer
        else if (arr1[i] < arr2[j])
        {
            if (i == 0 || arr1[i] != arr1[i - 1])
            {
                cout << arr1[i] << " ";
            }
            i++;
        }
        // If the element in the second array is smaller, print it and move its pointer
        else
        {
            if (j == 0 || arr2[j] != arr2[j - 1])
            {
                cout << arr2[j] << " ";
            }
            j++;
        }
    }

    // Print remaining elements of the first array, if any
    while (i < n1)
    {
        if (i == 0 || arr1[i] != arr1[i - 1])
        {
            cout << arr1[i] << " ";
        }
        i++;
    }

    // Print remaining elements of the second array, if any
    while (j < n2)
    {
        if (j == 0 || arr2[j] != arr2[j - 1])
        {
            cout << arr2[j] << " ";
        }
        j++;
    }
}

int main()
{
    int arr1[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int n1 = sizeof(arr1) / sizeof(arr1[0]);

    int arr2[] = {2, 3, 4, 4, 5, 11, 12};
    int n2 = sizeof(arr2) / sizeof(arr2[0]);

    cout << "Union of two arrays: ";
    findUnion(arr1, n1, arr2, n2);

    return 0;
}

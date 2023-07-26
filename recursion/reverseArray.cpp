// #include <bits/stdc++.h>
// using namespace std;
// void reverse(int arr[], int n)
// {
//     for (int i = n - 1; i >= 0; i--)
//     {
//         cout << arr[i];
//     }
// }

// int main()
// {
//     int n = 5;
//     int arr[] = {5, 4, 3, 2, 6};
//     reverse(arr, 5);
//     return 0;
// }

// USING TWO VARIABLE
// recursive way
// #include <iostream>
// using namespace std;

// void reverse(int arr[], int s, int e)
// {

//     if (s < e)
//     {
//         swap(arr[s], arr[e]);
//         reverse(arr, arr[s++], arr[e--]);
//     }
// }
// void printArray(int arr[], int n)
// {
//     cout << "The reversed array is:- " << endl;
//     for (int i = 0; i < n; i++)
//     {
//         cout << arr[i] << " ";
//     }
// }

// int main()
// {
//     int n = 5;
//     int arr[] = {5, 4, 3, 2, 6};

//     reverse(arr, 0, n - 1);
//     printArray(arr, n);

//     return 0;
// }

// // USING ONE VARIABLE
#include <iostream>
using namespace std;

void reverse(int arr[], int i, int n)
{

    if (i > n / 2)
    {
        return;
    }

    swap(arr[i], arr[n - i - 1]);
    reverse(arr, i + 1, n);
}
void printArray(int arr[], int n)
{
    cout << "The reversed array is:- " << endl;
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}

int main()
{
    int n = 5;
    int arr[] = {5, 8, 3, 2, 6};

    reverse(arr, 0, n);
    printArray(arr, n);

    return 0;
}
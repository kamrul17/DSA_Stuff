// BRUTE FORCE
/*#include <bits/stdc++.h>
using namespace std;
void rotate90Degree(int arr[][4], int arr1[][4], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr1[j][n - 1 - i] = arr[i][j];
        }
    }
}
void print(int arr1[][4], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int n = 4;
    int arr1[4][4];
    rotate90Degree(arr, arr1, 4);
    print(arr1, n);

    return 0;
}*/
// OPTIMAL
#include <bits/stdc++.h>
using namespace std;
void rotate90Degree(int arr[][4], int n)
{

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
    // reverse
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n / 2; j++)
        {
            swap(arr[i][j], arr[i][n - 1 - j]);
        }
    }
}
// void revrse(int arr[][4], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n / 2; j++)
//         {
//             swap(arr[i][j], arr[i][n - 1 - j]);
//         }
//     }
// }
void print(int arr[][4], int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[4][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15, 16};
    int n = 4;

    rotate90Degree(arr, 4);
    // revrse(arr, 4);
    print(arr, n);
    return 0;
}
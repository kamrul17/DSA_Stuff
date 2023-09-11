#include <bits/stdc++.h>
using namespace std;
void transposeMatrix(int arr[][4], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i; j++)
        {
            swap(arr[i][j], arr[j][i]);
        }
    }
}
// void transposeMatrix(int arr[][4], int arr1[][4], int n)
// {

//     for (int i = 0; i < n; i++)
//     {
//         for (int j = 0; j < n; j++)
//         {
//             arr1[j][i] = arr[i][j];
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
    int arr1[4][4];
    transposeMatrix(arr, n);
    print(arr, n);

    return 0;
}
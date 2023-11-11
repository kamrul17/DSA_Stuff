
#include <iostream>
using namespace std;

void diagonalDifference(int arr[][3], int row, int col)
{
    int sum = 0;
    int sum2 = 0;
    int diagonalDiff = 0;
    for (int i = 0; i < row; i++)
    {
        sum += arr[i][i];

        sum2 += arr[i][col - 1 - i];
    }
    cout << "first diagonal :" << sum << endl;
    cout << "second diagonal :" << sum2 << endl;
    cout << endl;
    diagonalDiff = sum - sum2;
    cout << diagonalDiff;
}
void PrintMatrix(int arr1[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr1[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{

    int arr[3][3] = {{1, 1, 1},
                     {0, 3, 0},
                     {1, 1, 11}};

    diagonalDifference(arr, 3, 3);
    // PrintMatrix(arr, 3, 3);
    return 0;
}
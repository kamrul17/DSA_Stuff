#include <bits/stdc++.h>
using namespace std;
void spiralPrint(int arr[][4], int rows, int cols)
{

    int startingRow = 0;
    int endingRow = rows - 1;
    int endingCol = cols - 1;
    int startingCol = 0;
    int count = 0;
    int total = rows * cols;
    while (count < total)
    {
        // print starting row
        for (int i = startingCol; count < total && i <= endingCol; i++)
        {
            cout << arr[startingRow][i] << " ";

            count++;
        }

        startingRow++;
        // print ending col
        for (int i = startingRow; count < total && i <= endingRow; i++)
        {
            cout << arr[i][endingCol] << " ";

            count++;
        }

        endingCol--;
        // print ending row
        for (int i = endingCol; count < total && i >= startingCol; i--)
        {
            cout << arr[endingRow][i] << " ";
            count++;
        }

        endingRow--;
        // print starting col
        for (int i = endingRow; count < total && i >= startingRow; i--)
        {
            cout << arr[i][startingCol] << " ";
            count++;
        }

        startingCol++;
    }
}
int main()
{
    int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int rows = sizeof(arr) / sizeof(arr[0]);       // Calculate number of rows
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]); // Calculate number of cols
    spiralPrint(arr, rows, cols);

    return 0;
}
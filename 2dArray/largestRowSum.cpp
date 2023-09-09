#include <iostream>
using namespace std;

// minRow
void minRow(int arr[][4], int row, int col)
{
    int minRow = INT8_MAX;
    int rowIndex = -1;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum < minRow)
        {
            minRow = sum;
            rowIndex = i;
        }
    }
    cout << "minRow->" << minRow << endl;
    cout << "rowIndex->" << rowIndex;
}
// maxRow
void maxRow(int arr[][4], int row, int col)
{
    int maxRow = INT8_MIN;
    int rowIndex = -1;

    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        if (sum > maxRow)
        {
            maxRow = sum;
            rowIndex = i;
        }
    }
    cout << "maxRow->" << maxRow << endl;
    cout << "rowIndex->" << rowIndex;
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
    // maxRow(arr, 3, 4);
    minRow(arr, 3, 4);
    return 0;
}
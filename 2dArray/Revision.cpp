// ROW-WISE ADDITION
/*#include <iostream>
using namespace std;

void rowWiseAddition(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        int sum = 0;
        for (int j = 0; j < col; j++)
        {
            sum += arr[i][j];
        }
        cout << "sum of " << i << " row : " << sum << endl;
    }
}
void PrintMatrix(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};

    PrintMatrix(arr, 3, 3);
    rowWiseAddition(arr, 3, 3);
    return 0;
}
*/

// TRANSPOSE MATRIX
/*#include <iostream>
using namespace std;

void transposeMatrix(int arr[][3], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < i; j++)
        {
            // swap
            int temp = arr[i][j];
            arr[i][j] = arr[j][i];
            arr[j][i] = temp;
        }
        cout << endl;
    }
}
void PrintMatrix(int arr[][3], int row)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    int row = 3;
    cout << "before transpose :" << endl;
    PrintMatrix(arr, row);
    transposeMatrix(arr, row);
    cout << "after transpose :" << endl;
    PrintMatrix(arr, row);
    return 0;
}
*/
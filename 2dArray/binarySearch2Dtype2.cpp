#include <iostream>
using namespace std;
bool binarySearch(int arr[][5], int rows, int cols, int target)
{
    int rowIndex = 0;
    int colIndex = cols - 1;

    while (rowIndex < rows && colIndex >= 0)
    {
        int element = arr[rowIndex][colIndex];
        if (element == target)
        {
            return 1;
        }
        if (element < target)
        {
            rowIndex++;
                }
        else
        {

            colIndex--;
        }
    }
    return 0;
}
int main()
{
    int arr[5][5] = {1, 4, 7, 11, 15, 2, 5, 8, 12, 19, 3, 6, 9, 16, 22, 10, 13, 14, 17, 24, 18, 21, 23, 26, 30};
    // print
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    int rows = sizeof(arr) / sizeof(arr[0]);       // Calculate number of rows
    int cols = sizeof(arr[0]) / sizeof(arr[0][0]); // Calculate number of cols
    int target;
    cin >> target;
    if (binarySearch(arr, rows, cols, target))
    {
        cout << "ELEMENT FOUND";
    }
    else
    {
        cout << "NOT FOUND";
    }
    return 0;
}
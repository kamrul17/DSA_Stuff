#include <iostream>
using namespace std;
void printLikeAwave(int arr[][3], int row, int col)
{
    for (int i = 0; i < col; i++)
    {
        if (i & 1)
        {
            // odd->bottom to top
            for (int j = row - 1; j >= 0; j--)
            {
                cout << arr[j][i] << " ";
            }
        }
        else
        {
            // even->top to bottom
            for (int j = 0; j < row; j++)
            {
                cout << arr[j][i] << " ";
            }
        }
    }
}
int main()
{
    int arr[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    printLikeAwave(arr, 3, 3);
    return 0;
}
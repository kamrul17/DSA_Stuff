/*#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<vector<int>> matrix = {
        {1, 2, 3, 4},
        {4, 5, 6, 5},
        {7, 8, 9, 6}};
    int row = matrix.size();
    int col = matrix[0].size();

    cout << col;

    return 0;
}*/
#include <iostream>
using namespace std;
//   row - Starting row index
//     m - ending row index
//     col - starting column index
//     n - ending column index
void rotateONeEle(int mat[][3], int m, int n)
{
    int row = 0, col = 0;
    int prev, curr;
    while (row < m && col < n)
    {
        if (row + 1 == m || col + 1 == n)
            break;
        // stored previous element of 2nd row [0+1][0],this element will replace the first element of current row
        prev = mat[row + 1][col];
        //  moving element of first row
        for (int i = col; i < n; i++)
        {
            curr = mat[row][i];

            mat[row][i] = prev;

            prev = curr;

            cout << curr << endl;
        }
        row++;
        //  moving element of last col
        for (int i = row; i < m; i++)
        {
            curr = mat[i][n - 1];
            mat[i][n - 1] = prev;
            prev = curr;
        }
        n--;
        //  moving element of last row
        if (row < m)
        {
            for (int i = n - 1; i >= col; i--)
            {
                curr = mat[m - 1][i];
                mat[m - 1][i] = prev;
                prev = curr;
            }
        }
        m--;

        // Move elements of first column
        if (col < n)
        {
            for (int i = m - 1; i >= row; i--)
            {
                curr = mat[i][col];
                mat[i][col] = prev;
                prev = curr;
            }
        }
        col++;
    }
}

void printMatrix(int mat[][3], int m, int n)
{
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << mat[i][j] << " ";
        }
        cout << endl;
    }
}
int main()
{
    int mat[3][3] = {1, 2, 3, 4, 5, 6, 7, 8, 9};
    printMatrix(mat, 3, 3);
    cout << endl;
    rotateONeEle(mat, 3, 3);
    printMatrix(mat, 3, 3);
    return 0;
}
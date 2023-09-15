#include <iostream>
using namespace std;
// m=total no. of rows
// n=total no. of cols
void rotateONeEle(int mat[][3], int m, int n)
{
    int row = 0, col = 0;
    int prev, curr;
    while (row < m && col < n)
    {
        if (row + 1 == m || col + 1 == n)
            break;
        // stored previous element
        prev = mat[row + 1][col];
        //  moving element of first row
        for (int i = col; i < n; i++)
        {
            curr = mat[row][i];
            mat[row][i] = prev;
            prev = curr;
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
    rotateONeEle(mat, 3, 3);
    printMatrix(mat, 3, 3);
    return 0;
}
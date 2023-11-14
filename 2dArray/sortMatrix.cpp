#include <iostream>
using namespace std;

void copyArr(int mat[][3], int tempArr[9], int m, int n)
{
    int tempIndex = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            tempArr[tempIndex++] = mat[i][j];
        }
    }
}
void sortArr(int tempArr[9], int size)
{
    for (int i = 0; i < size - 1; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (tempArr[j] > tempArr[j + 1])
            {
                int temp = tempArr[j];
                tempArr[j] = tempArr[j + 1];
                tempArr[j + 1] = temp;
            }
        }
    }
}
void copySortArr(int mat[][3], int tempArr[9], int m, int n)
{
    int tempIndex = 0;
    for (int i = 0; i < m; i++)
    {
        for (int j = 0; j < n; j++)
        {
            mat[i][j] = tempArr[tempIndex++];
        }
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
    int mat[3][3] = {11, 2, 3, 14, 5, 56, 27, 8, 59};
    int tempArr[9];
    printMatrix(mat, 3, 3);
    cout << endl;
    copyArr(mat, tempArr, 3, 3);
    sortArr(tempArr, 9);
    copySortArr(mat, tempArr, 3, 3);
    printMatrix(mat, 3, 3);
    return 0;
}
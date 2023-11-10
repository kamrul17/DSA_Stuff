#include <iostream>
#include <climits>

using namespace std;

// Function to calculate the sum of an hourglass
int calculateHourglassSum(int arr[6][6], int row, int col)
{
    int sum = arr[row][col] + arr[row][col + 1] + arr[row][col + 2] +
              arr[row + 1][col + 1] +
              arr[row + 2][col] + arr[row + 2][col + 1] + arr[row + 2][col + 2];
    return sum;
}

// Function to find the maximum hourglass sum
int hourglassSum(int arr[6][6])
{
    int maxSum = INT_MIN;

    for (int i = 0; i <= 3; ++i)
    {
        for (int j = 0; j <= 3; ++j)
        {
            int currentSum = calculateHourglassSum(arr, i, j);

            maxSum = max(maxSum, currentSum);
        }
    }

    return maxSum;
}

int main()
{
    int arr[6][6] = {{1, 1, 1, 0, 0, 0},
                     {0, 1, 0, 0, 0, 0},
                     {1, 1, 1, 0, 0, 0},
                     {0, 0, 2, 4, 4, 0},
                     {0, 0, 0, 2, 0, 0},
                     {0, 0, 1, 2, 4, 0}};

    int result = hourglassSum(arr);

    cout << "Maximum Hourglass Sum: " << result << endl;

    return 0;
}

/*#include <iostream>
using namespace std;

void reverseArrayIn2DMatrix(int arr[][3], int row, int col)
{
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col / 2; j++)
        {
            int temp = arr[i][j];
            arr[i][j] = arr[i][col - 1 - j];
            arr[i][col - 1 - j] = temp;
        }
    }
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
    int arr[1][3] = {1, 2, 3};

    reverseArrayIn2DMatrix(arr, 1, 3);
    PrintMatrix(arr, 1, 3);
    return 0;
}*/
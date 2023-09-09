#include <iostream>
using namespace std;
int main()
{
    int arr[3][4];
    // hard code
    /*
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
   int arr[3][4] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12};
    */
    // taking input in ROW WISE
    /* for (int i = 0; i < 3; i++)
     {
         for (int j = 0; j < 4; j++)
         {
             cin >> arr[i][j];
         }
     }*/
    // taking input in COLUMN WISE
    /*  for (int i = 0; i < 4; i++)
     {
         for (int j = 0; j < 3; j++)
         {
             cin >> arr[j][i];
         }
     }
     */
    // print
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 4; j++)
        {
            cout << arr[i][j] << " ";
        }
        // without this endl ,2d is not possible
        cout << endl;
    }
}
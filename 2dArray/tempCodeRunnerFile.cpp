// BRUTE FORCE
/*#include <bits/stdc++.h>
using namespace std;
void rotate90Degree(int arr[][4], int arr1[][4], int n)
{

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            arr1[j][n - 1 - i] = arr[i][j];
        }
    }
}
void print(int arr1[][4], int n)
{
    for (int i = 0; i < n; i++)
    {
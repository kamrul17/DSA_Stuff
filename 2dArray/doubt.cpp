#include <bits/stdc++.h>
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
}
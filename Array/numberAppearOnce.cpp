// BRUTE FORCE
/*
#include <iostream>
using namespace std;

int findNum(int arr[], int size)
{

    for (int i = 0; i < size; i++)
    {
        int num = arr[i];
        int count = 0;
        for (int j = 0; j < size; j++)
        {
            if (arr[j] == num)
            {
                count++;
            }
        }
        if (count == 1)
        {
            return num;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {2, 2, 11};
    int size = sizeof(arr) / sizeof(int);

    int ans = findNum(arr, size);
    cout << "The single element is: " << ans;
    return 0;
}*/
// BETTER APPROACH =>Hashing using the map data structure:
/*#include <bits/stdc++.h>
using namespace std;

int findNum(int arr[], int size)
{

    map<int, int> mpp;
    for (int i = 0; i < size; i++)
    {
        mpp[arr[i]]++;
    }
    for (auto it : mpp)
    {
        if (it.second == 1)
        {
            return it.first;
        }
    }
    return -1;
}
int main()
{
    int arr[] = {22, 22, 1};
    int size = sizeof(arr) / sizeof(int);

    int ans = findNum(arr, size);
    cout << "The single element is: " << ans;
    return 0;
}*/
// optimal APPROACH =>using XOR
#include <bits/stdc++.h>
using namespace std;

int findNum(int arr[], int size)
{

    int xor1 = 0;
    for (int i = 0; i < size; i++)
    {
        xor1 = xor1 ^ arr[i];
    }
    return xor1;
}
int main()
{
    int arr[] = {22, 2, 3, 3, 2, 22, 1};
    int size = sizeof(arr) / sizeof(int);

    int ans = findNum(arr, size);
    cout << "The single element is: " << ans;
    return 0;
}
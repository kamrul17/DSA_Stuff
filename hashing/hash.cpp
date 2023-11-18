#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 5, 4};
    int hash[6] = {0};
    for (int i = 0; i < 5; i++)
    {
        hash[arr[i]] += 1;
    }

    int q = 5;

    while (q--)
    {
        int num;
        cin >> num;
        cout << hash[num] << " ";
    }
    return 0;
}
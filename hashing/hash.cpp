#include <iostream>
using namespace std;

int main()
{

    int arr[5] = {1, 2, 3, 4, 5};
    int hash[6] = {0};
    for (int i = 0; i < 5; i++)
    {
        hash[arr[i]] += 1;
    }

    for (int i = 0; i < 6; i++)
    {
        cout << hash[i] << endl;
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
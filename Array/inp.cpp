#include <iostream>
#include <string>
using namespace std;
int main()
{
    int size1;

    string arr1[size1];
    cin >> size1;
    for (int i = 0; i < size1; i++)
    {
        cin >> arr1[i];
    }
    for (int i = 0; i < size1; i++)
    {
        cout << arr1[i];
    }
    return 0;
}
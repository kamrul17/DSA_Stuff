#include <iostream>
using namespace std;
int main()
{
    int arr[5] = {2, 3, 5, 6, 7};

    int max = INT16_MAX;
    for (int i = 0; i < 5; i++)
    {
        if (arr[i] < max)
            max = arr[i];
    }
    cout << max;
}
// int main()
// {
//     int arr[5] = {5, 9, 5, 6, 7};

//     int max = arr[0];
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] > max)
//             max = arr[i];
//     }
//     cout << max;
// }
// int main()
// {
//     int arr[5] = {5, 9, -1, 6, 7};

//     int min = arr[0];
//     for (int i = 0; i < 5; i++)
//     {
//         if (arr[i] < min)
//             min = arr[i];
//     }
//     cout << min;
// }
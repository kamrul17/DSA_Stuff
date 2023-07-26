#include <bits/stdc++.h>
using namespace std;

void CountNum(int count)
{

    if (count == 4)
    {
        return;
    }
    cout << count;
    count++;

    CountNum(count);
}

// void printN1(int i, int n)
// {
//     if (n > i)
//     {
//         return;
//     }
//     cout << n << endl;
//     printN1(i, n - 1);
// }

int main()
{
    int count = 0;
    CountNum(0);

    return 0;
}
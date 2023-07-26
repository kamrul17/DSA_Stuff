#include <iostream>
using namespace std;

int findHcf(int n1, int n2)
{
    while (n1 > 0 && n2 > 0)
    {
        if (n1 > n2)
        {
            n1 = n1 % n2;
        }
        else
        {
            n2 = n2 % n1;
        }
    }
    if (n1 == 0)
    {
        return n2;
    }
    else
    {
        return n1;
    }
}
int main()
{
    int n1, n2;
    cin >> n1 >> n2;
    // BRUTE FORCE*************
    // for (int i = n1; i >= 1; i--)
    // {
    //     if (n1 % i == 0 && n2 % i == 0)
    //     {
    //         cout << i << endl;
    //     }
    // }
    // BRUTE FORCE*************

    // optimal approach where ==TC=>LOGfimin(n1.n2);
    int res = findHcf(n1, n2);
    cout << res;
    return 0;
}
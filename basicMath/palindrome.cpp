#include <iostream>
using namespace std;
int main()
{
    int n;
    cin >> n;
    int temp = n;
    int reverse = 0;

    while (n > 0)
    {
        int digit = n % 10;
        n = n / 10;
        reverse = (reverse * 10) + digit;
    }
    // cout << reverse;
    if (temp == reverse)
    {
        cout << "palindrome";
    }
    else
    {
        cout << "Notpalindrome";
    }
    return 0;
}



#include <bits/stdc++.h>
using namespace std;
bool armstrongNum(int num)
{
    int originalNo = num;
    int temp = num;

    int NoOFdigits = 0;
    int sum = 0;
    while (temp != 0)
    {
        NoOFdigits++;
        temp /= 10;
    }
    while (num != 0)
    {
        int digit = num % 10;
        sum = sum + pow(digit, NoOFdigits);
        num = num / 10;
    }
    return (sum == originalNo);
}

int main()
{
    int num;
    cin >> num;

    if (armstrongNum(num))
    {
        cout << "ARMSTRONG";
    }
    else
    {
        cout << "NOT A ARMSTRONG";
    }

    return 0;
}

#include <iostream>
using namespace std;
int countDividingDigits(int N)
{
    int count = 0;
    int temp = N;

    while (temp != 0)
    {
        int digit = temp % 10;
        if (digit != 0 && N % digit == 0)
        {
            count++;
        }
        temp /= 10;
    }

    return count;
}

int main()
{
    int N = 12345;
    int result = countDividingDigits(N);
    cout << result << endl;

    return 0;
}

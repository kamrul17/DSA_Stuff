#include <iostream>
using namespace std;

void findFact(int num)
{

    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            cout << i << " ";
        }
        }
}
int main()
{
    int num;
    cin >> num;
    findFact(num);

    return 0;
}

#include <iostream>
using namespace std;

void printTriangle1(int n)
{
    for (int i = 1; i <= n; i++)
    {
        // star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // space
        for (int j = 1; j <= n - i; j++)
        {
            cout << " ";
        }
        // star
        for (int j = 1; j <= i; j++)
        {
            cout << "*";
        }
        cout << endl;
        // ----------------
    }
}

void printTriangle2(int n)
{

    for (int i = 1; i <= 2 * n - 1; i++)
    {
        int start = i;
        if (i > n)
        {
            start = 2 * n - i;
        }

        //  star
        for (int j = 1; j <= start; j++)
        {
            cout << "*";
        }
        // space
        for (int j = 1; j <= n - start; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= n - start; j++)
        {
            cout << " ";
        }

        //  star
        for (int j = 1; j <= start; j++)
        {
            cout << "*";
        }

        cout << endl;
    }
}
void p(int n)
{
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || j == 1 || i == 4 || j == 4)
            {
                cout << "*";
            }
            else
            {
                cout << " ";
            }
        }
        cout << endl;
    }
}
int main()
{
    int n = 5;

    p(n);
    // printTriangle2(n);

    return 0;
}

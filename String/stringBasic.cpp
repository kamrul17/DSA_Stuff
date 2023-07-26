#include <iostream>
using namespace std;

int getLength(char name[])
{
    int count = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        count++;
    }
    return count;
}
void getReverse(char name[], int len)
{
    int s = 0;
    int end = len - 1;
    while (s < end)
    {
        swap(name[s++], name[end--]);
    }

    // for (int i = end; i >= s; i--)
    // {
    //     cout << name[i];
    // }
}
// TO CONVERT INTO LOWERCASE
char toLowerCase(char ch)
{
    if (ch >= 'a' && ch <= 'z')
    {
        return ch;
    }
    else
    {
        char temp = ch - 'A' + 'a';
        return temp;
    }
}
bool palindrome(char name[], int len)
{
    int s = 0;
    int e = len - 1;
    while (s <= e)
    {
        if (toLowerCase(name[s]) != toLowerCase(name[e]))
        {
            return 0;
        }
        else
        {

            s++;
            e--;
        }
    }

    return 1;
}

int main()
{
    char name[20];
    cout << "enter ur name" << endl;
    cin >> name;
    // name[2] = '\0';
    // cout << name;
    // length of string???
    int len = getLength(name);
    cout << "Length of array " << len << endl;
    // reverse a string???
    // getReverse(name, len);
    // cout << name << endl;
    // palindrome???
    // palindrome(name, len);

    if (palindrome(name, len))
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not a palindrome";
    }
    //  palindrome??? foR CASE SENSITIVE
    // cout << "To lowercase " << toLowerCase('b');
    // cout << "To lowercase " << toLowerCase('H');
    return 0;
}
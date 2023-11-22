#include <iostream>

using namespace std;

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
bool checkPalindrome(char name[], int len)
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
// bool checkPalindrome(char name[], int len)
// {
//     int start = 0;
//     int end = len - 1;
//     while (start <= end)
//     {
//         if (isalnum(name[start]) == 0)
//         {

//             start++;
//         }
//         else if (isalnum(name[end]) == 0)
//         {

//             end--;
//         }

//         if ((name[start]) != (name[end]))
//         {
//             return false;
//         }
//         else
//         {
//             start++;
//             end--;
//         }
//     }
//     return true;
// }
int getLenth(char name[])
{
    int len = 0;
    for (int i = 0; name[i] != '\0'; i++)
    {
        len++;
    }
    return len;
}
int main()
{
    char name[20] = "race e car";
    // cin >> name;
    // int len = name.length();
    int len = getLenth(name);
    cout << "length of string: " << len << endl;
    if (checkPalindrome(name, len))
    {
        cout << "palindrome";
    }
    else
    {
        cout << "not palindrome";
    }

    return 0;
}
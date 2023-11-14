bool checkPalindrome(char name[], int len)
{
    int s = 0;
    int e = len - 1;
    while (s <= e)
    {
        if (name[s] != name[e])
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
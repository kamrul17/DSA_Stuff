/*#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n)
{
   for (int i = 1; i <= n; i++)
   {
      //    check no. exist or not
      int flag = 0;
      for (int j = 0; j < n; j++)
      {
         if (arr[j] == i)
            flag = 1;
         break;
      }
      if (flag == 0)
      {
         return i;
      }
   }
   return -1;
}
int main()
{
   int arr[] = {1, 2, 4, 5};
   int n = 5;
   findMissingNumber(arr, n);
   return 0;
}*/
// BETTER APPROACH USING HASHING
/*#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n)
{
   int hash[n + 1] = {0};
   for (int i = 0; i < n - 1; i++)
   {
      hash[arr[i]] += 1;
   }
   for (int i = 1; i < n; i++)
   {
      if (hash[i] == 0)
      {
         return i;
      }
   }
}
int main()
{
   int arr[] = {1, 2, 4, 5};
   int n = 5;
   int ans = findMissingNumber(arr, n);
   cout << "missing number is :" << ans << endl;
   return 0;
}*/

// OPtimal approach using sum=n(n+1)/2

/*#include <iostream>
using namespace std;

int findMissingNumber(int arr[], int n)
{
   int sum = n * (n + 1) / 2;
   int totalSum = 0;
   for (int i = 0; i < n - 1; i++)
   {
      totalSum += arr[i];
   }
   return sum - totalSum;
}
int main()
{
   int arr[] = {1, 2, 4, 5};
   int n = 5;
   int ans = findMissingNumber(arr, n);
   cout << "missing number is :" << ans << endl;
   return 0;
}*/
// OPTIMAL 2 USING XOR (same no.->0)
#include <iostream>
using namespace std;

void findMissingNumber(int arr[], int n)
{
   int xor1 = 0, xor2 = 0;

   // for (int i = 1; i <= n; i++)
   // {
   //    xor1 = xor1 ^ i;
   // }
   // cout << endl;
   // REDUCE
   for (int i = 0; i < n; i++)
   {
      xor2 = xor2 ^ arr[i];
      xor1 = xor1 ^ i + 1;
   }
   xor1 = xor1 ^ n;
   int ans = xor1 ^ xor2;
   cout << ans;
}
int main()
{
   int arr[] = {1, 2, 4, 5};
   int n = 5;
   findMissingNumber(arr, n);
   // int ans = findMissingNumber(arr, n);
   // cout << "missing number is :" << ans << endl;
   return 0;
}
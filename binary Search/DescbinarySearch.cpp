#include<iostream>
using namespace std;

int descendingBinarySearch(int arr[],int n,int ele)
{
int s=0;
int e=n-1;
while (s<=e)
{
    int mid=s+ (e-s)/2;
  if (arr[mid]==ele)
  {
    return mid;
  }
  else if(ele<arr[mid] )
  {
    s=mid+1;
  }
  else{
    e=mid -1;
  }
}
return -1;

}


int main(){

int arr[6]={7,6,5,4,3,2};

int n=sizeof(arr)/sizeof(int);

int result=descendingBinarySearch(arr,6,2);
cout<<result;
    return 0;
}


// int binarySearch(int arr[],int n,int ele,int s,int e)
// {

// while (s<=e)
// {
//     int mid=s+ (e-s)/2;
//   if (arr[mid]==ele)
//   {
//     return mid;
//   }
//   else if(ele<arr[mid] )
//   {
//     e=mid-1;
//   }
//   else{
//     s=mid +1;
//   }
// }
// return -1;

// }


// int main(){

// int arr[6]={2,3,4,5,6,7};

// int n=sizeof(arr)/sizeof(int);
// int s=0;
// int e=n-1;
// int result=binarySearch(arr,6,8,s,e);
// cout<<result;
//     return 0;
// }
#include<iostream>
using namespace std;




int binarySearch(int arr[],int n,int ele)
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
    e=mid-1;
  }
  else{
    s=mid +1;
  }
}
return -1;

}


int main(){

int arr[6]={2,3,4,5,6,7};

int n=sizeof(arr)/sizeof(int);

int result=binarySearch(arr,6,6);
cout<<result;
    return 0;
}

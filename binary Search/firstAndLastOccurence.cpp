#include<iostream>
using namespace std;

int firstOccurencebinarySearch(int arr[],int n,int ele)
{
int s=0;
int e=n-1;
int result=-1;

while (s<=e)
{
    int mid=s+ (e-s)/2;
  if (arr[mid]==ele)
  {
    result=mid;
    e=mid-1;
  }
  else if(ele<arr[mid] )
  {
    e=mid-1;
  }
  else{
    s=mid +1;
  }
}
return result;

}

int LastOccurencebinarySearch(int arr[],int n,int ele)
{
int s=0;
int e=n-1;
int result=-1;
while (s<=e)
{
    int mid=s+ (e-s)/2;
  if (arr[mid]==ele)
  {
    result=mid;
    s=mid+1;
  }
  else if(ele<arr[mid] )
  {
    e=mid-1;
  }
  else{
    s=mid +1;
  }
}
return result;

}
int main(){

int arr[6]={2,2,2,3,3,3};

int n=sizeof(arr)/sizeof(int);

int result=firstOccurencebinarySearch(arr,6,3);
int result2=LastOccurencebinarySearch(arr,6,3);
cout<<result;
cout<<endl;
cout<<result2;
 
    return 0;
}
#include<iostream>
using namespace std;

int AscendingBinarySearch(int arr[],int n,int ele)
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
    // int arr[6]={2,3,4,5,6,7};
    if (arr[0]<arr[1])
    {
        cout<<"array is in ascending order"<<endl;
       int r1= AscendingBinarySearch(arr,6,2);
       cout<<r1;
    }
    else
    {
        cout<<"array is in descending order"<<endl;
        int r2 = descendingBinarySearch(arr,6,2);
        cout<<r2;
    }
    
    return 0;
}
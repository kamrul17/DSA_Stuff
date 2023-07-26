#include<iostream>
using namespace std;


int count(int arr[],int n,int key){
int count=0;
for (int i = 0; i < n; i++)
{
    if (arr[i]==key)
    {
       count++;
    }
}
return count;
}

int main(){
int arr[6]={2,2,3,3,3,3};
int ans=count(arr,6,3);
cout<<ans;


    return 0;
}
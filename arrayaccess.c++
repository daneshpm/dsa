#include<iostream>
using namespace std;
int insertelement(int arr[],int n,int element,int capacity)
{
  if(n >= capacity)
   return n;
  arr[n]=element;
   return(n+1);
}
int main()
{
  int arr[20]={12,16,20,40,50,70};
  int capacity=sizeof(arr)/sizeof(arr[0]);
  int n=6;
  int i,element=80;
  cout<<"\n before insertion:";
  for(i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
  n=insertelement(arr,n,element,capacity);
  cout<<"\n after insertion";
  for(i=0;i<n;i++){
    cout<<arr[i]<<" ";
  }
  return 0;

}

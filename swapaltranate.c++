#include<iostream>
using namespace std;
void printary(int arr[],int size)
{
  for(int i=0;i<size;i++)
  {
    cout<<arr[i]<<" ";
  }cout<<endl;
}
void swapaltarnate(int arr[],int size)
{
  for(int i=0;i<size;i+=2)
  {
    if(i+1<size)
    {
      swap(arr[i],arr[i+1]);
    }
  }
}
int main()
{
  int n;
  cin>>n;
  int m[100];
  for(int i=0;i<n;i++)
  {
    cin>>m[i];
  }
  swapaltarnate(m,10);
  printary(m,10);
}
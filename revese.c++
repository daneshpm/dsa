#include<iostream>
using namespace std;

void reverse(int arr[],int n)
{
  int start,end;
  start=0;
  end=n-1;
  while(start<=end)
  {
    swap(arr[start],arr[end]);
    start++;
    end--;
  }
}
void printary(int arr[],int n)
{
  for(int i=0;i<n;i++)
  {
    cout<<arr[i]<<" ";
  }
}
int main()
{
  int n;
  cin>>n;
  
  int n1[10];
  for(int i=0;i<n;i++)
  {
    cin>>n1[i];
  }
  reverse(n1,n);
  printary(n1,n);

}

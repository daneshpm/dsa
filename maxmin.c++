#include<iostream>
using namespace std;
int getmax(int num[],int n)
{
  int max=INT_MIN;
  for(int i=0;i<n;i++)
  {
    if(num[i]>max)
    {
      max=num[i];
    }
  }
  return max;
}
int getmin(int num[],int n)
{
  int min=INT_MAX;
  for(int i=0;i<n;i++)
  {
    if(num[i]<min)
    {
      min=num[i];
    }
  }
  return min;
}
int main()
{
  int size;
  cin>>size;
  int num[100];
  for(int i=0;i<size;i++)
  {
    cin>>num[i];
  }
  cout<<"the max value"<<getmax(num,size)<<endl;
  cout<<"the min value"<<getmin(num,size)<<endl;
}

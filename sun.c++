#include<iostream>
using namespace std;
int sum(int num[],int n)
{
  int sum=0;
  for(int i=0;i<n;i++){
  sum=sum+num[i];
  }
  return sum;

}
int main()
{
  int size;
  cin>>size;
  int num[10];
  for(int i=0;i<size;i++)
  {
    cin>>num[i];
  }
  cout<<"sum of numbers:"<<sum(num,5);
}
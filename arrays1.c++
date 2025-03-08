#include<iostream>
using namespace std;
int main(){
  int n;
  cin>>n;
  int digit=0,ans=0;
  while(n!=0)
  {
  digit=n%10;
  if((ans>INT_MAX/10)||(ans<INT_MIN/10))
  {
    cout<<0;
  }
  ans=ans*10+digit;
  n=n/10;
  }
  cout<<ans;



}
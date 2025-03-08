#include<iostream>
using namespace std;
int main()
{
  /*int n;
  cin>>n;
  int m[100];
  for(int i=0;i<n;i++)
  {
    cin>>m[i];
  }
  int ans=0;
  for(int i=0;i<n;i++)
  {
    ans=ans^m[i];
  }
  cout<<ans<<" ";*/
  int x;
  cin>>x;
  int original=x;
  int remainder,reveresed=0;
        while(x!=0)
        {
            remainder=x%10;
            reveresed=reveresed*10+remainder;
            x/=10;
        }
        if(reveresed==original)
        {
            cout<< true;
        }
        else
        {
            cout<< false;
        }

}
#include<iostream>
using namespace std;
int NumberofElementsInIntersection(int a[], int b[], int n, int m) 
{
  int count=0,i=0,j=0;
  while(i<n&&j<m)
  {
    if(a[i]==b[j])
    {
      count++;
    }
    else if(a[i]<b[j])
      {
       i++;
      }
    else
      {
        j++;
      }
  }
  return count;
}
int main()
{
  int a[100],b[100];
  int i=0,j=0;
  int n,m;
  cin>>n>>m;
  for(i=0;i<n;i++)
  {
    cin>>a[i];
  }
  for(j=0;j<m;j++)
  {
    cin>>b[j];
  }
  int ans=NumberofElementsInIntersection(a, b,100, 100);
  cout<<ans;

}
       
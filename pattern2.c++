#include<iostream>
using namespace std;
int main()
{
 /* int i=1;
  int n;
  cin>>n;
   int count=1;
  while(i<=n)
  {
    int j=1;
    while(j<=n)
    {
    
    cout<<count<<" ";
    count=count+1;
    j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  int n;
  cin>>n;
  int i=1;
  while(i<=n)
  {
    int j=1;
    while(j<=i)
    {
      cout<<"*"<<" ";
      j=j+1;
    }
    cout<<endl;
    i=i+1;
  }
  int n;
  cin>>n;
  int i=1;
 
  while(i<=n)
  {
    int j=1;
    while(j<=i)
    {
      cout<<i+j-1<<" ";
      j=j+1;

    }
    cout<<endl;
    i=i+1;
  }
  int n;
  cin>>n;
  int i=1;
  while(i<=n)
  {
    int space=n-i;
    while(space)
    {
      cout<<" ";
      space=space-1;
    }
    int j=1;
    while(j<=i)
    {
      cout<<j;
      j=j+1;
    }
    int start =i-1;
    while(start)
    {
      cout<<start;
      start=start-1;
    }
    cout<<endl;
    i=i+1;
   }*/
   int n;
   cin>>n;
   int i=1;
   while(i<=n)
   {
    int j=n-i+1;
    int count=1;
    while(j)
    {
      cout<<count<<" ";
      count=count+1;
      j=j-1;
    }
       int stars1 = i - 1;
        while (stars1)
        {
            cout << "*";
            stars1--;
            
        }
        // Printing 2nd Half stars.
        int stars2 = i - 1;
        while (stars2)
        {
            cout << "*";
            stars2--;
        }
    int j2=n-i+1;
    while(j2)
    {
      cout<<j2<<" ";
      j2--;
    }
    cout<<endl;
    i=i+1;
    

   }

}

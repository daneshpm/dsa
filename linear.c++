#include<iostream>
using namespace std;
int key(int arr[],int n)
{
  int key;
  cout<<"enter the key";
  cin>>key;
 
  for(int i=0;i<n;i++)
  {
   if(key==arr[i])
  {
    cout<<"the number has been founded"<<endl;
  }
  }
  return key;
}
int main()
{
  int n,i;
  cin>>n;
  int n1[10];
 
  for( i=0;i<n;i++){
    cin>>n1[i];
  }
  cout<<"the search"<<key(n1,5);
  
}
#include<iostream>
using namespace std;
int main()
{
  /*
  int n;
  cout<<"enter the value of n"<<endl;
  cin>>n;
  if(n>0)
  {
    cout<<"n is positive"<<endl;
  }
  else{
    cout<<"n is -ve"<<endl;
  }
  */
 /*int a,b;
 cout<<"enter the two values"<<endl;
 cin>>a>>b;
 if (a>b)
 {
  cout<<"a is greater"<<endl;
 }
 else{
  cout<<"b is greater"<<endl;
 }
*/
char ch;
cout<<"enter the char"<<endl;
cin>>ch;
if(ch>='a'&&ch<='z')
{
  cout<<"tis are lower case"<<endl;

}
else if(ch>='A'&&ch<='Z'){
  cout<<"this are upper case"<<endl;

}
else{
  cout<<"this are numeric"<<endl;
}
}
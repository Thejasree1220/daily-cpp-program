#include<iostream>
using namespace std;
int main()
{
  int a,b,c;
cout<<"enter three numbers:";
cin>>a>>b>>c;
  //Finding largest number 
if(a>b&&a>c)
{
cout<<a<<" is largest num"<<endl;
}
else if(b>a&&b>c)
{
cout<<b<<" is largest num"<<endl;
}
else
{
cout<<c<<" is largest num"<<endl;
}
}

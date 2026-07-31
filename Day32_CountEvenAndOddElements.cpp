#include<iostream>
using namespace std;
int main()
{
  int n;
cout<<"enter the size of an array:";
cin>>n;
int a[n],i,even=0,odd=0;
cout<<"enter array elements:";
  for(i=0;i<n;i++)
    cin>>a[i];
for(i=0;i<n;i++)
{
if(a[i]%2==0)
  even++;
else
  odd++;
}
cout<<"even count is:"<<even<<endl<<"odd count is:"<<odd<<endl;
}

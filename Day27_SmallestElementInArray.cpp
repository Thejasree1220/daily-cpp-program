#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the size of an array:";
cin>>n;
  int a[n],i;
cout<<"enter the array ele:";
for(i=0;i<n;i++)
  cin>>a[i];
  int smallest=a[0];
for(i=1;i<n;i++)
{
if(a[i]<smallest)
  smallest=a[i];
}
cout<<"smallest element in an array is:"<<smallest<<endl;
return 0;
}

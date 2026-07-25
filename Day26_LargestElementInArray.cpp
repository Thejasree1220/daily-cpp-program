#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the size of an array:";
cin>>n;
  int i,large=0,a[n];
cout<<"enter the array ele:";
for(i=0;i<n;i++)
  cin>>a[i];
for(i=0;i<n;i++)
{
if(a[i]>large)
  large=a[i];
}
cout<<"largest element in an array is:"<<large<<endl;
return 0;
}

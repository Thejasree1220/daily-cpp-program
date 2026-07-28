#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the size of an array:";
cin>>n;
  int a[n],i;
cout<<"enter the array ele:";
for(i=n-1;i>=0;i--)
  cin>>a[i];
  cout<<"reverse of an array is:";
for(i=0;i<n;i++)
cout<<a[i]<<" ";
cout<<endl;
return 0;
}

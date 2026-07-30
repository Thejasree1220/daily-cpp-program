#include<iostream>
using namespace std;
int main()
{
  int n;
cout<<"enter the size of an arra:";
cin>>n;
int a[n],b[n],i,j;
cout<<"enter first array elements:";
for(i=0;i<n;i++)
  cin>>a[i];
cout<<"enter second array elements:";
for(i=0;i<n;i++)
  cin>>b[i];
for(i=n,j=0;i<(n*2),j<n;i++,j++)
  a[i]=b[j];
cout<<"after merging the two arrays:";
for(i=0;i<(n*2);i++)
  cout<<a[i]<<' ';
  cout<<endl;
}

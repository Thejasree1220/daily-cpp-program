#include<iostream>
using namespace std;
int main()
{
int n;
cout<<"enter the size of an array:";
cin>>n;
  int a[n],i,sum=0,average;
cout<<"enter the array ele:";
for(i=0;i<n;i++)
  cin>>a[i];
for(i=0;i<n;i++)
sum+=a[i];
  average=sum/n;
cout<<"Avarage of an array is:"<<average<<endl;
return 0;
}

#include<iostream>
using namespace std;
int main()
{
         int n;
         cout<<"enter the size of an array:";
         scanf("%d",&n);
         int a[n],i,j,k;
         cout<<"enter the array elements:";
         for(i=0;i<n;i++)
                 cin>>a[i];
         for(i=0;i<n;i++)
         {
                 for(j=i+1;j<n;j++)
                         if(a[i]==a[j])
                                 cout<<a[j]<<" ";
         }
         cout<<endl;
  return 0;
 }

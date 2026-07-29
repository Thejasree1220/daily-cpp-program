#include<iostream>
using namespace std;
int main()
 {
       int n;
       cout<<"enter the size of an array:";
       cin>>n;
      int a[n],b[n],i;
      cout<<"enter the array ele:";
      for(i=0;i<n;i++)
          cin>>a[i];
     for(i=0;i<n;i++)
          b[i]=a[i];
    cout<<"printing the element after copying:";
   for(i=0;i<n;i++)
        cout<<b[i]<<" ";
    cout<<endl;
    return 0;
 }

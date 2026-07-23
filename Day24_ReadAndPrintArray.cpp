#inlcude<iostream>
using namespace std;
int main()
{
  int i,n;
  cout<<"enter array size:";
  cin>>n;
  int a[n];
  cout<<"enter array elements:";
  for(i=0;i<n;i++)
    cin>>a[i];
  for(i=0;i<n;i++)
    cout<<a[i]<<" ";
  cout<<endl;
 return 0;
}

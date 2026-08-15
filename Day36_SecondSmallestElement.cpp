#include<iostream>
using namespace std;
int main()
{
	int n;
	cout<<"enter the size of an array:";
	cin>>n;
	int a[n],i,s,ss;
	cout<<"enter the array elements:";
	for(i=0;i<n;i++)
		cin>>a[i];
	if(a[0]<a[1])
	{
		s=a[0];
		ss=a[1];
	}
	else if(a[0]>a[1])
	{
		s=a[1];
		ss=a[0];
	}
	for(i=2;i<n;i++)
	{
		if(a[i]<s)
		{
			ss=s;
			s=a[i];
		}
		else if(a[i]<ss&&a[i]!=s)
			ss=a[i];
	}
	cout<<"second smallest element is:"<<ss<<endl;
  return 0;
}

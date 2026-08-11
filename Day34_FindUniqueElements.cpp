#include <iostream>
using namespace std;
int main()
{
	int a[100], n, i, j, count;
	cout<<"Enter number of elements: ";
	cin>>n;
	cout<<"Enter elements:\n";
	for(i = 0; i < n; i++)
		cin>>a[i];
	cout<<"Unique elements: ";
	for(i = 0; i < n; i++)
	{
		count = 0;
		for(j = 0; j < n; j++)
		{
			if(a[i] == a[j])
				count++;
		}

		if(count == 1)
			cout<<a[i]<<" ";
	}
	cout<<endl;
	return 0;
}

#include <iostream>
using namespace std;
int main()
{
    int a[100], n, i, j, temp;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements:";
    for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(i = 0; i < n - 1; i++)
    {
        for(j = 0; j < n - 1 - i; j++)
        {
            if(a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    cout<<"Sorted array: ";
    for(i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
        cout<<endl;
}

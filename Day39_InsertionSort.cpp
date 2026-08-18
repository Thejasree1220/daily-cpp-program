#include <stdio.h>
void main()
{
    int a[100], n, i, j, key;
    cout<<"Enter the number of elements: ";
    cin>>n;
    cout<<"Enter "<<n<<" elements:";
    for(i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for(i = 1; i < n; i++)
    {
        key = a[i];
        j = i - 1;
        while(j >= 0 && a[j] > key)
        {
            a[j + 1] = a[j];
            j--;
        }
        a[j + 1] = key;
    }
    cout<<"Sorted array: ";
    for(i = 0; i < n; i++)
    {
        cout<<a[i]<<" ";
    }
  cout<<endl;
}

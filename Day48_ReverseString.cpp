#include<iostream>
using namespace std;
int main()
{
        char s[100];
        int len,i,j;
        cout<<"enter the string:";
        cin.getline(s,100);
        //we can do in two ways
        //1'st way
        for(len=0;s[len];len++);
        cout<<len<<endl;
        for(i=len-1;i>=0;i--)
                cout<<s[i];
        cout<<endl;
        //2'nd way
        char temp;
        for(i=0,j=len-1;i<j;i++,j--)
        {
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
        }
        cout<<s<<endl;
        return 0;
}

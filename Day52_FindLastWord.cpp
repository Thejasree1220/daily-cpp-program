#include<iostream>
using namespace std;
int main()
{
        char s[100];
        cout<<"enter the string:";
        cin.getline(s,100);
        int i,p,q;
        for(i=0;s[i];i++)
        {
                if(s[i]==' ')
                        p=i+1;
        }
        q=i-1;
        cout<<"last word: ";
        for(p;p<=q;p++)
                cout<<s[p];
        cout<<endl;
}

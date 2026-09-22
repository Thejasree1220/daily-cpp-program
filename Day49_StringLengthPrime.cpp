#include<iostream>
using namespace std;
int main()
{
        char s[100];
        int i,len,c=0;
        cout<<"enter the string:";
        cin.getline(s,100);
        for(len=0;s[len];len++);
        cout<<len<<" is length of the string"<<endl;
        for(i=1;i<=len;i++)
        {
                if(len%i==0)
                        c++;
        }
        if(c==2)
                cout<<len<<" is prime"<<endl;
        else
                cout<<len<<" is not a prime"<<endl;
}

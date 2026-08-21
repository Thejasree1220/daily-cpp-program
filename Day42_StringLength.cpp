#include<iostream>
using namespace std;
int main()
{
        char s[100];
        int len;
        cout<<"enter the string:";
        cin.getline(s,100);
        for(len=0;s[len];len++);
        cout<<"length of the string is:"<<len<<endl;
}

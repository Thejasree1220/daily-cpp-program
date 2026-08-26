#include<iostream>
using namespace std;
int main()
{
        char s[100];
        int i,d=0;
        cout<<"enter the string:";
        cin.getline(s,100);
        for(i=0;s[i];i++)
        {
                if(s[i]>='0'&&s[i]<='9')
                        d++;
        }
        cout<<"digit count:"<<d<<endl;
}

#include<iostream>
using namespace std;
int main()
{
        char s[100];
        int v=0,i;
        cout<<"enter the string:";
        cin.getline(s,100);
        for(i=0;s[i];i++)
        {
                if((s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u')||(s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'))
                        v++;
        }
        cout<<"count of vowels:"<<v<<endl;
}

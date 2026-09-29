#include<iostream>
using namespace std;
int main()
{
        char s[100];
        cout<<"enter the string:";
        cin.getline(s,100);
        int i,w=0;
        cout<<"lengths of each word is:";
        for(i=0;s[i]!='\0';i++)
        {
                w++;
                if(s[i]==' ')
                {
                        cout<<w-1<<" ";
                        w=0;
                }
        }
        cout<<w<<endl;
}

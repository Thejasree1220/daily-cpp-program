#include<iostream>
using namespace std;
int main()
{
        char s[100];
        int i,w=0;
        cout<<"enter the string:";
        cin.getline(s,100);
        for(i=0;s[i];i++)
        {
                if(s[i]==' ')
                        w++;
        }
        if(s[i]=='\0')
                w++;
        cout<<"word count is:"<<w<<endl;
  return 0;
}

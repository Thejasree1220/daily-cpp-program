
#include<iostream>
using namespace std;
int main()
{
        char s[100];
        int i;
        cout<<"enter the string:";
        cin.getline(s,100);
        for(i=0;s[i];i++)
        {
                if(s[i]>='a'&&s[i]<='z')
                        s[i]=s[i]-32;
        }
        cout<<"after conversion:"<<s<<endl;
  return 0;
}

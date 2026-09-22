#include<iostream>
using namespace std;
int main()
{
        char s[100];
        int i,k;
        cout<<"enter the str:";
        cin.getline(s,100);
        for(i=0;s[i];i++)
        {
                        if(s[i]>='0'&&s[i]<='9')
                        {
                                for(k=i;s[k];k++)
                                        s[k]=s[k+1];
                                k--;
                                i--;

                        }
        }
        cout<<"After deletion:"<<s<<endl;
}

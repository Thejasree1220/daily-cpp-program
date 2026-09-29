#include<iostream>
using namespace std;
int main()
{
        char s[100];
        int i,j,k;
        cout<<"enter the str:";
        cin.getline(s,100);
        for(i=0;s[i];i++)
        {
                for(j=i+1;s[j];j++)
                {
                        if(s[i]==s[j])
                        {
                                for(k=j;s[k];k++)
                                        s[k]=s[k+1];
                                k--;
                                i--;
                        }
                }
        }
      cout<<"After deletion:"<<s<<endl;
}

#include<iostream>
using namespace std;
int main()
{
        char s[100];
        int i,j;
        cout<<"enter the string:";
        cin.getline(s,100);
        for(i=0;s[i];i++)
        {
                if(s[i]==' ')
                {
                        for(j=i;s[j];j++)
                                s[j]=s[j+1];
                }
        }
        cout<<"After removing space:"<<s<<endl;
        return 0;
}

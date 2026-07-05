#include<iostream>
using namespace std;
int main()
{
  int num1,num2,temp;
cout<<"enter two numbers:";
cin>>num1>>num2;
cout<<"Before swaping"<<endl<<"num1="<<num1<<" num2="<<num2<<endl;
temp=num1;
num1=num2;
num2=temp;
cout<<"After swaping"<<endl<<"num1="<<num1<<" num2="<<num2<<endl;
}

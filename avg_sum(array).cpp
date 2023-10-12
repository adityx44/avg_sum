#include<iostream>
#include<stdio.h>
using namespace std;
int main(){
  int n[5];
int sum=0,avg=0;
cout<<"enter the marks"<<endl;
for(int i=0;i<5;i++)
{
cin>>n[5];
sum=sum+n[i];
}
avg=sum/5;
cout<<"sum and avg is:"<<sum<<"and"<<avg<<endl;
return 0;
}

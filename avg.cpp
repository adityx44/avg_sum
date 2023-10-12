#include<iostream>
using namespace std;
int main()
{
  int n,i,a;
double sum =0;
double avg =0;
cout<<"enter the no.of element "<<endl;
cin>>n;
for(i=0;i<n;i++)
{
cout<<"enter the number"<<i+1<<":";
cin>>a;
sum= sum+a;
}
cout<<"sum of"<<n<< "numbers is"<<sum<<endl;
avg=sum/n;
cout<<"avg is"<<avg<<endl;
return 0;
}

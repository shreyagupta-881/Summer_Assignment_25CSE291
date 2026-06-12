//write a program to generate fibonacci Series
#include<iostream>
using namespace std;
int main(){
int temp,a=0,b=1,i;
int n;
cout<<"Enter the number upto which you want fabonacci series";
cin>>n;
for(i=1;i<=n;i++)
      {temp=a+b;
       b=a;
       a=temp;
       cout<<b;}
return 0;
       
    }
//write a program to find nth fibonacci Term
#include<iostream>
using namespace std;
int main(){
int temp,a=0,b=1;
int n,i;
cout<<"Enter the number ";
cin>>n;
if(n==1){
    cout<<a;
}
else if(n==2){
    cout<<b;
}
else {
    for(i=3;i<=n;i++)
      {temp=a+b;
       a=b;
       b=temp;
    }
    cout<<temp;
}
return 0;
       
    }
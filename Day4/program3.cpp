//Write a program to check armstrong number
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int num,count=0,rem,arm=0,c;
cout<<"Enter Number";
cin>>num;
c=num;
int org =num;
while(num!=0)
    {num=num/10;
     count++;}
//cout<<count;
while(c!=0)
     {rem=c%10;
      arm=arm+pow(rem,count);
      c=c/10;
       }


if(org==arm)
    {cout<<"The Number is armstrong Number";}
else
     {cout<<"The Number is not Armstrong Number";}

return 0;
}
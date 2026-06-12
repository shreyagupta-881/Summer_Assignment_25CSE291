//Write a program to print armstrong number in a range 
#include <iostream>
#include <cmath>
using namespace std;
int main(){
int min,max;
cout<<"Enter Two Number";
cin>>min>>max;
for(int i=min;i<=max;i++){
int temp=i;
int count=0;
int arm=0;
while(temp!=0){
     temp/=10;
     count++;
    }
temp=i;
while(temp!=0){
      int rem=temp%10;
      arm+=pow(rem,count);
      temp/=10; 
    }
if(arm == i )
    {cout << i <<" ";
    }
}
return 0;
}
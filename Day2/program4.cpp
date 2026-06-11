//Write a program to check whether the number is pallindrome number 
#include <iostream>
using namespace std;
int main(){
 int num,reverse=0,rem;
 int c ;//c is the number that is used to check if condition
cout<<"enter the number ";
cin>>num;
c=num;
while(num!=0){
    rem=num%10;
    reverse=(reverse*10)+rem;
    num=num/10;
    }
    
if(c==reverse)
   { cout<<"number is Pallindrome i.e "<<c;}
   
else
    { cout<<"Number is not Pallindrome";}
cin.get();
cin.get();
return 0;
}
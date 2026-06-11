//Write a program to find the product of digits 
#include<iostream>
using namespace std;
int main(){
int num, product=1, rem ;
cout<< "Enter the Number";
cin>>num;
while(num!=0){
    rem=num%10;
    product=product*rem;
    num=num/10;
}
       cout<<"product of the digits is"<<product;
       
cin.get();
cin.get();
return 0;
}
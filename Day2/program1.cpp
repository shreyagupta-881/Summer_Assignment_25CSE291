//Write a program to find sum of digits 
# include <iostream>
using namespace std;
int main(){
int sum=0, rem;
int n; //number
cout<<"enter the number";
cin>>n;
while(n!=0)
   {  rem=n%10;
     sum=sum+rem;
     n=n/10;
   }
   cout<<"sum of digits"<< sum;
cin.get();
cin.get();
return 0;
}


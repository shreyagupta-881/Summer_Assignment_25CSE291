//Write a program to check whether the number is prime or not 
#include <iostream>            //header files
using namespace std;      //using namespace so that we don't need to write std           
int main() {
int number;                  
int count=0,i;             // i is used in for loop 
cout<<"Enter the Number";  // asking for the number to the user
cin>>number;               // scanning the number entered by the user

for(i=1;i<=number;i++)            
        {if(number%i==0)
               count++;
          }

if(count>2)
{    cout<<"Number is Prime Number";}
else
      {cout<<"Number is not Prime Number";}
      
cin.get();
cin.get();
return 0;
}

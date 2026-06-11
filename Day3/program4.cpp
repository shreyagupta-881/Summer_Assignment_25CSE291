//WRITE A PROGRAM TO FIND LCM OF TWO NUMBER
#include <iostream>
using namespace std;
int main(){                      
//PROGRAM USE GCD TO FIND LCM 
int num1,num2;                  //Taking two numbers 
int i;                          //for "FOR LOOP"
int GCD;                        
cout<<"Enter two number";       //ASKING FOR THE NUMBRERS FROM USER 
cin>>num1>>num2;                //SCANNING THE NUMBER GIVING BY USER
for(i=1;i<=num1&&i<=num2;i++)
{          if(num1%i==0&&num2%i==0)
            GCD=i;}
cout<<"LCM is "<<(num1*num2)/GCD;
return 0;
}
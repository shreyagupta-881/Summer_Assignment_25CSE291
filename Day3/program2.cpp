//Write a program to print prime number as a range  
#include <iostream>            //header files
using namespace std;      //using namespace so that we don't need to write std           
int main() {
int minnum,maxnum;
int org;
int i;             // i is used in for loop 
cout<<"Enter the starting and ending number";  // asking for the range upto which user want prime number
cin>>minnum>>maxnum;               // scanning the number entered by the user
cout<<"prime number between:"<<minnum<<"and"<<maxnum<<"are:\n";
for(int num =minnum;num<=maxnum;num++)            
     {   if(num<2)
             continue;
          org=1;
          for(i=2;i<=num/2;i++){
               if(num%i==0){
                    org=0;
                    break;
               }
          }
          if(org)
              cout<<num<<" ";}
      
cin.get();
cin.get();
return 0;
}

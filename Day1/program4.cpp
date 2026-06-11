# include <iostream>
using namespace std;
int main()
{int count=0,n ;
    cout<<"enter the number whose digits you need to count";
    cin>> n ;
while(n!=0)
  {n=n/10;
   count++;  }
cout<<"the number of digits is "<<count;

cin.get();
cin.get();
return 0;



}
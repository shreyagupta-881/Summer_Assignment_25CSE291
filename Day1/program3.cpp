# include <iostream>
using namespace std;
int main()
{int fact=1,n ;
    cout<<"enter the number whose factorial you need to find";
    cin>> n ;
for(int i =1;i<=n;i++)
       {fact=fact*i;
       }
       cout<< "factorial of a number is "<< fact ;
cin.get();
cin.get();
return 0;


}
//program to find gcd 
#include<stdio.h>
int main(){
  int num1,num2,i,GCD=1;
    printf("Enter two number");
    scanf("%d%d",&num1,&num2);
    for(int i=1;i<=num1&&i<=num2;i++)
    {if(num1%i==0&&num2%i==0)
         {GCD=i;}
    }   
    printf("%d",GCD);
    return 0;
}

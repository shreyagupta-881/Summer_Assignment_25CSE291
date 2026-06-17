//program to find Lcm 
#include<stdio.h>
int main(){
  int num1,num2,i,GCD=1,LCM;
    printf("Enter two number");
    scanf("%d%d",&num1,&num2);
    for(int i=1;i<=num1&&i<=num2;i++)
    {if(num1%i==0&&num2%i==0)
         {GCD=i;}
    }   
    LCM=(num1*num2)/GCD;
    printf("%d",LCM);
    return 0;
}
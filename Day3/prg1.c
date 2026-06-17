//program to check the number is prime
#include<stdio.h>
int main(){
    int num,org;
    printf("Enter the number");
    scanf("%d",&num);
    for(int i=2;i<=num/2;i++)
    {if(num%i==0)
        {  org=1;
           break;}
    }   
    if(org==0&&num>1)
    printf("prime number");
    else
    printf("Number is not prime");
    return 0;
}
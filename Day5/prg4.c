//program to largest prime factor
#include<stdio.h>
int main(){
    int num,i,large=0;
    printf("Enter the Number");
    scanf("%d",&num);
    for(i=1;i<=num;i++){
          if(num%i==0)
               large=i;
               num=num/i;
              }
printf("The Largest Prime Factor is%d",large);         
return 0;
            }
//program for check armstrong number
#include<stdio.h>
#include <math.h>
int main(){
int num,count=0,arm=0,rem;
printf("enter number");
scanf("%d",&num);
int org=num;
int c=num;
while(num!=0){
    count++;
    num=num/10;
}
for(int i=1;i<=count;i++){
    rem=c%10;
    arm+=pow(rem,count);
    c=c/10;}
if(org==arm)
   { printf("Armstrong number");}
else 
    {printf("Not Armstrong Number");}
    
    return 0;
}
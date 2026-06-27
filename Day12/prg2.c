#include<stdio.h>
#include <math.h>
int armstrong(int num){
    int count=0,rem,a=0;
    int org=num;
int c=num;
while(num!=0){
    count++;
    num=num/10;
}
for(int i=1;i<=count;i++){
    rem=c%10;
    a+=pow(rem,count);
    c=c/10;}
if(org==a)
   { return 1;}
else 
    { return 0;}}
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    if(armstrong(num)){
        printf("Number Is Armstrong");}
    else{
        printf("Number is not armstrong");
    }
  return 0;  
}
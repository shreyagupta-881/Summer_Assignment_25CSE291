// Convert decimal into binary
#include<stdio.h>
int main(){
    int num,i,binary=0,rem,place=1;
    printf("Enter the Number");
    scanf("%d",&num);
    while(num!=0){
              
               rem=num%2;
               binary=binary+rem*place;
               place=place*10;
               num=num/2;}
              
printf("%d",binary);       
return 0;
            }
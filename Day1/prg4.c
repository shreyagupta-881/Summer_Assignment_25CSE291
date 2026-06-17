//program to count digits of a number
#include<stdio.h>
int main(){
    int num,count=0;
    printf("Enter the number");
    scanf("%d",&num);
    while(num!=0){
        
        count++;
        num=num/10;
    }
printf("%d",count);
    return 0;
}
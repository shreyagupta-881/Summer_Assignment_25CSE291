//program to find product of digits
#include<stdio.h>
int main(){
    int num,product=1,rem;
    printf("Enter the number");
    scanf("%d",&num);
    while(num!=0){
        rem=num%10;
        product*=rem;
        num=num/10;
    }
printf("%d",product);
    return 0;
}
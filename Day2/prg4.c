//program to check pallindrome
#include<stdio.h>
int main(){
    int num,rev=0,rem;
    printf("Enter the number");
    scanf("%d",&num);
    int org=num;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;
    }   
    if(org==rev){
        printf("Number is palindrome");
    }
    else{
        printf("Number is not palindrome");
    }
    return 0;
}
#include<stdio.h>
int palindrome(int num){
    int org=num,rev=0,rem;
    while(num!=0){
        rem=num%10;
        rev=rev*10+rem;
        num=num/10;}
    if(org==rev){
        return 1;}
    else{
        return 0;
    }
}
int main(){
    int num;
    int p;
    printf("Enter the number");
    scanf("%d",&num);
    if(palindrome(num)){
        printf("Number is Palindrome");
    }
    else{
        printf("Number is not palindrome");}

    return 0;
}
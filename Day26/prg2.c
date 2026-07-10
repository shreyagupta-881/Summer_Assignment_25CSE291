#include<stdio.h>
int main(){
    int age;
    printf("WELCOME TO VOTING ELIGIBLITY SYSTEM\n");
    printf("To check whether you are eligible for vote or not.\n");
    printf("Enter your age");
    scanf("%d",&age);
    if(age>=18){
        printf("You are eligible");}
    else{
        printf("Sorry! You are not eligible");
    }
    return 0;
}
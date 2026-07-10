#include<stdio.h>
int main(){
    int num=5,guess;
    printf("Guess the number(1-10)");
    scanf("%d",&guess);
    if(guess==num){
        printf("You Guess the right number");}
    else{
        printf("Sorry! you guess the wrong number Try Again");
    }
    return 0;
}
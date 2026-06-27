#include<stdio.h>
int prime(int num)
{int i,count=0;
    if(num==1){ 
        return 0;
    }
    else{
    for(int i=1;i<=num;i++){
       
        if(num%i==0)
            count++;}
    if(count==2)
        return 1 ;
    else
        return 0;
}}
int main(){
    int num;
    char *p;
    printf("Enter number");
    scanf("%d",&num);
    if(prime(num)){
        printf("Number is prime");
    }
    else{
        printf("Number is not Prime");
    }
    return 0;
}
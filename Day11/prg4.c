#include<stdio.h>
int fact(int num){
    int fact=1,i;
    for(i=1;i<=num;i++){
        fact=fact*i;}
        
        return fact;
    
}
int main(){
    int num,f;
    printf("enter the num");
    scanf("%d",&num);
    f=fact(num);
    printf("%d",f);

    return 0;
}
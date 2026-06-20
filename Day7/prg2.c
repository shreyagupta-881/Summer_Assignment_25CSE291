//recursive fibonacci
#include <stdio.h>
int fib(int num){
    if(num<=1)
    return num;
    else 
    return fib(num-1)+fib(num-2);
}
int main(){
    int num,i;
    printf("Enter terms");
    scanf("%d",&num);
    for(i=0;i<num;i++){
         printf("%d",fib(i));
    }
    
    return 0 ;
}

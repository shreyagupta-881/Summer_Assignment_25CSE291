#include<stdio.h>
int main(){
    int pow,base,i;
    long long result=1;
   
    printf("Enter Base");
    scanf("%d",&base);
    printf("Enter power");
    scanf("%d",&pow);
   
    for(i=1;i<=pow;i++){
        result=result*base;
        
    }
    printf("%d",result);
    return 0;
}
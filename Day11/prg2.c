#include<stdio.h>
int max(int a,int b){
    if(a>b)
         return a;
    else
         return b;
}
int main(){
    int a,b,m;
    printf("Enter two numbers");
    scanf("%d%d",&a,&b);
    m=max(a,b);
    printf("Maximum Number is = %d",m);

    return 0;
}
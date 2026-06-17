// program for nth fabonacci series
#include<stdio.h>
int main(){
    int num,i,a,b,c;
    a=0;
    b=1;
    printf("Enter nth term");
    scanf("%d",&num);
    for(i=1;i<num;i++)
    {
        c=a+b;
        printf("%d",c);
        a=b;
        b=c;
    }
    
    return 0;
}
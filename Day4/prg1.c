// program for fabonsacii 
#include<stdio.h>
int main(){
    int num,a=0,b=1,c,i;
    printf("Enter the number of terms");
    scanf("%d",&num);
    /*if(num==0)
        printf("%d",a);
    else if (num==1)
         printf("%d",b);
    else*/{
        for(i=0;i<=num;i++){
            c=a+b;
            b=a;
            a=c;
        
        printf("%d",a);
        
    }}
    return 0;
}
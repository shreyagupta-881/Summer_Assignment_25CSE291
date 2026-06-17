//program for nth fabonacci range
#include<stdio.h>
int main(){
    int min,max,i,temp,r,sum;
    printf("Enter two number");
    scanf("%d%d",&min,&max);
    for(int i=min;i<=max;i++)
    {temp=i;
    sum=0;
    while(temp!=0)
    {   r=temp%10;
        sum=sum+(r*r*r);
        temp=temp/10;
        }
        if(sum==i)
          printf("%d\n",i);

    }   
    
    return 0;
}
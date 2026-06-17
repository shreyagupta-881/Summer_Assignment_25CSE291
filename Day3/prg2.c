//program to print prime numbers in range 
#include<stdio.h>
int main(){
    int min,max,i,j,org;
    printf("Enter two number");
    scanf("%d%d",&min,&max);
    for(int i=min;i<=max;i++)
    {if(i<2)
         continue;
        org=1;
    for(j=2;j<=i/2;j++)
    {    if(i%j==0)
    {       org=0;
            break;}
        }
        if(org)
          printf("%d\n",i);

    }   
    
    return 0;
}
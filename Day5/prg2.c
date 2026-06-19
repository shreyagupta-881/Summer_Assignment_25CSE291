// program to check strong number 
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the Number");
    scanf("%d",&num);
    int org=num;
    while(num!=0){
        int rem=num%10;
        int fact=1;
        for(int i=1;i<=rem;i++)
                 {fact*=i;}
                 sum=sum+fact;
                 num=num/10;
    }
if(org==sum){
    printf("The Number is strong number");
}
else{
    printf("The Number is Not Strong Number");
}
return 0;
}
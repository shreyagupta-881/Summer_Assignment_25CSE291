#include<stdio.h>
int perfect(int num){
int sum=0;
        {for(int i=1;i<num;i++){
        if(num%i==0)
            sum=sum+i;}}
if(num==sum){
    return 1;
}
else{
   return 0;
}}
int main(){
    int num;
    printf("Enter the number");
    scanf("%d",&num);
    if(perfect(num))
       printf("NUMBER IS PERFECT");
    else
       printf("NUMBER IS NOT PERFECT");
return 0;
}
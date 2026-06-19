// program to check perfect number
#include<stdio.h>
int main(){
    int num,sum=0;
    printf("Enter the number");
    scanf("%d",&num);
    {for(int i=1;i<num;i++){
        if(num%i==0)
            sum=sum+i;}}
if(num==sum){
    printf("The Number is Perfect");
}
else{
    printf("The Number is not Perfect");
}
return 0;
}
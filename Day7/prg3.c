//recursive sum of digits
#include <stdio.h>
int sumofdigits(int num){
    if(num==0)
    return 0;
    else 
    return (num%10)+sumofdigits(num/10);
}
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    printf("%d",sumofdigits(num));
    return 0 ;
}
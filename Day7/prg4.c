//recursive reverse
#include <stdio.h>
int r=0;
int reverse(int num){
    if(num==0)
    return r;
    r=r*10+num%10;
    return reverse(num/10);
}
int main(){
    int num;
    printf("Enter number");
    scanf("%d",&num);
    printf("%d",reverse(num));
    return 0 ;
}
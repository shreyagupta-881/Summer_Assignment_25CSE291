#include<stdio.h>
int main(){
    int ch;
    float a,b;
    printf("Enter two number");
    scanf("%f%f",&a,&b);
    printf("Enter choice \n1.add \n2.substract \n3.multiply \n4.divide \n");
    scanf("%d",&ch);
    switch(ch){
        case 1:
        printf("%2f",a+b);
        break;
        case 2:
        printf("%2f",a-b);
        break;
        case 3:
        printf("%2f",a*b);
        break;
        case 4:
        printf("%2f",a/b);
        break;
        default:
        printf("Wrong Choice");
         }
        return 0;
}
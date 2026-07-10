#include<stdio.h>
int main(){
    float salary,bonus,total;
    printf("Enter Salary");
    scanf("%f",&salary);
    printf("Enter Bonus");
    scanf("%f",&bonus);
    total=salary+bonus;
    printf("Total Salary=%2f",total);
    return 0;
}
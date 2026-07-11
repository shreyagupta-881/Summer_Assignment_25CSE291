#include<stdio.h>
int main(){
    int ticket;
    float price=300,total;
    printf("ENTER THE NUMBER OF TICKETS\n");
    scanf("%d",&ticket);
    total=price*ticket;
    printf("Total Amount:%f",total);
    return 0;
}
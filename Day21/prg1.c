#include<stdio.h>
int main(){
    char str[]="Good";
    int len=0;
    while(str[len]!='\0')
    len ++;
    printf("%d",len);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char str[]="Good";
    int l;
    for(l=strlen(str)-1;l>=0;l--)
   
    printf("%c",str[l]);
    return 0;
}
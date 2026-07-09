#include<stdio.h>
#include<string.h>
int main(){
    char str[10];
    int i,len,temp;
    printf("enter string");
    scanf("%d",str);
    len=strlen(str);
    
    for(i=0;i<len/2;i++){
        if(str[i]!=str[len-1-i]){
            temp=0;
            break;
        }
    }
   if(temp)
    printf("pallindrome");
   else
   printf("NOT Pallindrome");
       return 0;
}
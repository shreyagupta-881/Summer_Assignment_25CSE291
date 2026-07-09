#include<stdio.h>

int main(){
    char str[]="good";
    int l;
    for(l=0;str[l]!='\0';l++){
        if(str[l]>='a'&&str[l]<='z')
        str[l]=str[l]-32;
            
    }
   
    printf("%s",str);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char s[100];
    printf("enter a string");
    scanf("%s",&s);
    printf("len=%d\n",strlen(s));
    printf("uppercase");
    for( int i=0;s[i]!='\0';i++){
        if(s[i]>='a'&&s[i]<='z')
        s[i]=s[i]-32;
           printf("%c",s[i]);
    }
    return 0;
}
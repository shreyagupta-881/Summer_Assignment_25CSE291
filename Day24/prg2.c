#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
    int i,c;
   
    printf("Enter  string");
    scanf("%s",s1);

    for(i=0;s1[i]!='\0';i++){
        c=1;
        while(s1[i]==s1[i+1]){
            c++;
            i++;
        }
        printf("%c%d",s1[i],c);
    }   
    return 0;
}
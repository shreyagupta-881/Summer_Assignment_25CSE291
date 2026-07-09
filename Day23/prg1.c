#include<stdio.h>
int main(){
    char s1[100];
    int c,i,j;
    printf("Enter string");
    scanf("%s",s1);
for(i=0;s1[i]!='\0';i++){
        c=0;
        for(j=0;s1[j]!='\0';j++){
            if(s1[i]==s1[j])
            c++;
        }
        if(c==1){
            printf("%c",s1[i]);
            break;
        }
    }
    return 0;
}
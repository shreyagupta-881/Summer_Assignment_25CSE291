#include<stdio.h>
int main(){
    char s1[100],maxChar;
    int c1[200]={0},max=0,i;
    printf("Enter string");
    scanf("%s",s1);
    for(i=0;s1[i]!='\0';i++){
        c1[s1[i]-'a']++;
      }

    for(i=0;i<200;i++){
        if(c1[i]>max){
           max=c1[i];
           maxChar=i+'a';
        }
    }
    printf("%c\n",maxChar);
    printf("%d\n",max);
    return 0;
}
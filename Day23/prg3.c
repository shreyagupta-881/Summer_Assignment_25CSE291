#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],s2[100];
    int c1[200]={0},c2[200]={0},i;
    printf("Enter first string");
    scanf("%s",s1);

    printf("enter second string");
    scanf("%s",s2);

    if(strlen(s1)!=strlen(s2)){
        printf("THE STRING ARE NOT anagrams.\n");
        return 0;
    }
    for(i=0;s1[i]!='\0';i++){
        c1[(unsigned char)s1[i]]++;
        c2[(unsigned char)s2[i]]++;
    }

    for(i=0;i<200;i++){
        if(c1[i]!=c2[i]){
            printf("THE STRING ARE NOT anagrams.\n");
            return 0;
        }
    }
    printf("THE STRINGS ARE anagrams.\n");
    return 0;
}
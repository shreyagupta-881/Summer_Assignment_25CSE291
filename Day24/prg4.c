#include<stdio.h>
#include<string.h>
int main(){
    char s1[100];
   int i,j,k;
    printf("Enter sentence");
    scanf("%s",s1);
for(i=0;s1[i]!='\0';i++){
    for(j=i+1;s1[j]!='\0';j++){
        if(s1[i]==s1[j]){
        for(k=j;s1[k]!='\0';k++){
            s1[k]=s1[k+1];
        }
        j--;
    }
}
}
    
printf("Removing Duplicates%s",s1);
    return 0;
}
#include<stdio.h>
#include<string.h>
int main(){
    char s1[100],word[20],l[20];
   int i=0,j=0,max=0;
    printf("Enter sentence");
    fgets(s1,sizeof(s1),stdin);

    while(1){
        if(s1[i]!=' '&&s1[i]!='\0'&&s1[i]!='\n'){
            word[j++]=s1[i];
        }
        else{
            word[j]='\0';
            if(j>max){
                max=j;
                strcpy(l,word);
            }
            j=0;
        }
        if(s1[i]=='\0')
        break;
        i++;
    }
printf("Longest word:%s",l);
    return 0;
}
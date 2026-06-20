#include<stdio.h>
int main(){
    int i;
    char ch;

    for(i=1;i<=4;i++){
        for(ch='A';ch<'A'+i;ch++){
             printf("%c",ch);}
             printf("\n");
    }
return 0;
}
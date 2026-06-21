#include<stdio.h>
int main(){
    int i;
    char ch;

    for(i=0;i<=4;i++){
        for(ch='A';ch<'A'+i;ch++){
             printf("%c",'A'+i);}
             printf("\n");
    }
return 0;
}
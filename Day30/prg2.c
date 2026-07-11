#include<stdio.h>
#include<string.h>
int main(){
    char book[5][50];
    int n,i;
    printf("Enter no of books");
    scanf("%d",&n);
    for(i=0;i<n;i++){
        printf("Enter Book Name");
        scanf("%s",&book[i]);
}
printf("Available books\n");
for(i=0;i<n;i++){
    printf("%s\n",&book[i]);
}
return 0;
}
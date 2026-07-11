#include<stdio.h>
struct book{
    int id;
    char name[10];
    
};
int main(){
   struct book b[5];
   int n,i;
   printf("No. of books");
   scanf("%d",&n);
   for(i=0;i<n;i++){
   printf("Enter book id");
   scanf("%d",&b[i].id);
   printf("Enter book name");
   scanf("%s",&b[i].name);}
   printf("Library Record\n");
   for(i=0;i<n;i++){
   printf("%d%s\n",b[i].id,b[i].name);}
   return 0;

}
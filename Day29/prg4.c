#include<stdio.h>
struct item{
    int id;
    char name[15];
    int quantity;
};
int main(){
   struct item it[5];
   int n,i;
   printf("No. of items");
   scanf("%d",&n);
   for(i=0;i<n;i++){
    printf("\nitem\n",i+1);
    printf("Enter item id");
    scanf("%d",&it[i].id);
   printf("Enter Name\n");
   scanf("%s",&it[i].name);
   printf("Enter Quantity\n");
   scanf("%d",&it[i].quantity);}

   printf("==========================\n");
   printf("Inventory List\n");
   
   for(i=0;i<n;i++){

   printf("%d%s%d\n",it[i].id,it[i].name,it[i].quantity);}
   return 0;

}
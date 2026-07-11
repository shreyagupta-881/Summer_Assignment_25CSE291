#include<stdio.h>
struct employee{
    int id;
    char name[10];
    float salary;
};
int main(){
   struct employee e[5];
   int n,i;
   printf("No. of employee");
   scanf("%d",&n);
   for(i=0;i<n;i++){
   printf("\nEMPLOYEE\n",i+1);
   printf("Enter id");
   scanf("%d",&e[i].id);
   printf("Enter Name");
   scanf("%s",&e[i].name);
   printf("Enter Salary");
   scanf("%f",&e[i].salary);}

   printf("Employee Record\n");
   for(i=0;i<n;i++){

   printf("%d %s %f\n",e[i].id,e[i].name,e[i].salary);}
   return 0;
}

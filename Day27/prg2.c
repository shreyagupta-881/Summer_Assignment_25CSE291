#include<stdio.h>
struct employee{
    int id;
    char name[10];
    float salary;
};
int main(){
   struct employee e;
   printf("Enter id");
   scanf("%d",&e.id);
   printf("Enter Name");
   scanf("%s",&e.name);
   printf("Enter Salary");
   scanf("%f",&e.salary);
   printf("Employee Record\n");
   printf("Employee id:%d\n",e.id);
   printf("name:%s\n",e.name);
   printf("Salary:%2f",e.salary);
   return 0;
}

#include<stdio.h>
struct student{
    int roll;
    char name[15];
    float marks;
};
int main(){
   struct student stu[5];
   int n,i;
   printf("No. of students");
   scanf("%d",&n);
   for(i=0;i<n;i++){
    printf("\nstudent\n",i+1);
    printf("Enter ROLL NUMBER");
    scanf("%d",&stu[i].roll);
   printf("Enter Name\n");
   scanf("%s",&stu[i].name);
   printf("Enter MARKS\n");
   scanf("%f",&stu[i].marks);}

   printf("==========================\n");
   printf("Stdent Record\n");
   
   for(i=0;i<n;i++){

   printf("%d %s %f\n",stu[i].roll,stu[i].name,stu[i].marks);}
   return 0;

}
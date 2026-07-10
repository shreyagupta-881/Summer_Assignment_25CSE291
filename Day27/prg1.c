#include<stdio.h>
struct student{
    int roll;
    char name[10];
    float marks;
};
int main(){
   struct student s;
   printf("Enter Roll No.");
   scanf("%d",&s.roll);
   printf("Enter Name");
   scanf("%s",&s.name);
   printf("Enter Marks");
   scanf("%f",&s.marks);
   printf("Student Record\n");
   printf("roll no:%d\n",s.roll);
   printf("name:%s\n",s.name);
   printf("marks:%2f",s.marks);
   return 0;
}

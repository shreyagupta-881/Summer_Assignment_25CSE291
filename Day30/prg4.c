//Student Record System 
#include<stdio.h>
struct student
{ int roll;
    char name[50];
    float marks;
};
struct student stu[5];
void input(int n);
void studentrecord(int n);
int main(){
    int n;
    printf("Enter  no of Student");
    scanf("%d",&n);
    input(n);
    studentrecord(n);
    return 0;}
    void input(int n){
        int i;
    for(i=0;i<n;i++){
    printf("\nstudent%d\n",i+1);
    printf("Enter ROLL NUMBER");
    scanf("%d",&stu[i].roll);
    printf("Enter Name\n");
    scanf("%s",&stu[i].name);
    printf("Enter MARKS\n");
    scanf("%f",&stu[i].marks);

    }
}
void studentrecord(int n){
    int i;
printf("Student Record\n");
   
   for(i=0;i<n;i++){

   printf("%d %s %f\n",stu[i].roll,stu[i].name,stu[i].marks);}}
  
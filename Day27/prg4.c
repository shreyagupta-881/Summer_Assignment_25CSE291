#include<stdio.h>
int main(){
    float ENG,HIN,SCI,SS,MATHS,total,per;
    printf("Enter Marks");
    scanf("%f%f%f%f%f",&ENG,&HIN,&MATHS,&SCI,&SS);
    total=ENG+HIN+MATHS+SCI+SS;
    per=total/5;
    if(per>=33){
        printf("Pass");
    }
    else{
        printf("Fail");
    }
    return 0;
}
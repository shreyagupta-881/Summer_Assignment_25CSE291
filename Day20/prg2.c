#include<stdio.h>
int main(){
int a1[3][3]={{1,2,3},{3,2,6},{6,5,4}};
int i,j,flag=1;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        if(a1[i][j]!=a1[j][i])
                flag=0;
    }
}
if(flag) 
        printf("Symmetric Matrix");
else
        printf("NOT SYMMETRIC");  
    return 0;
}
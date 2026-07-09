#include<stdio.h>
int main(){
int a1[3][3]={{1,2,3},{3,2,6},{6,5,4}},a2[3][3]={{1,2,3},{4,5,6},{7,8,9}};
int a3[3][3],i,j;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        a3[i][j]=a1[i][j]+a2[i][j];
        printf("%d",a3[i][j]);
    }
    printf("\n");
}
}
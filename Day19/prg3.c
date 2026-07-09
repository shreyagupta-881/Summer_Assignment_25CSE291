#include<stdio.h>
int main(){
int a1[3][3]={{1,2,3},{3,2,6},{6,5,4}};
int i,j;
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
        
        printf("%d",a1[j][i]);
    }
    printf("\n");
}
}
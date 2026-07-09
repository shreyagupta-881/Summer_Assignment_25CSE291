#include<stdio.h>
int main(){
int a1[3][3]={{1,2,3},{3,2,6},{6,5,4}};
int i,j,sum;
for(i=0;i<3;i++){
    sum=0;
    for(j=0;j<3;j++)    
        sum+=a1[j][i];
    printf("Column %d Sum=%d\n",i+1,sum);  }
    return 0;
}
#include<stdio.h>
int main(){
int a1[3][3]={{1,2,3},{3,2,6},{6,5,4}};
int i,sum=0;
for(i=0;i<3;i++)
    sum+=a1[i][i];
        
        printf("Diagnol sum=%d",sum);
    
    return 0;
}
#include<stdio.h>
int main(){
    int arr1[]={1,2,3,5,4};
    int arr2[]={1,2,4,6,7},i,j;
    
    for(i=0;i<5;i++){
        for(j=0;j<5;j++){
        if(arr1[i]==arr2[j])
            printf("%d",arr1[i]);
         }
         }
          return 0;
}
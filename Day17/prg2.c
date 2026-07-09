#include<stdio.h>
int main(){
    int arr1[]={1,2,3,5,4};
    int arr2[]={1,2,4,6,7},i,j,temp;
    
    for(i=0;i<5;i++){
        printf("%d",arr1[i]);}
       for(i=0;i<5;i++){
        temp=0;
        for(j=0;j<5;j++){
        if(arr2[i]==arr1[j])
           temp=1;
        }
        if(temp==0)
           printf("%d",arr2[i]);
         }

    
    return 0;
}
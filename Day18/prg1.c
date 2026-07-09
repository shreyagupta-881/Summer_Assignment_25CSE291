#include<stdio.h>
int main(){
    int arr[]={9,4,6,2,3,1};
    int i,j,temp,n=6;
    
    for(i=0;i<n;i++){
        for(j=0;i<n-i-1;j++){
           if(arr[j]>arr[j+1]){
              temp=arr[j];
              arr[j]=arr[j+1];
              arr[j+1]=temp;
        }
    }
}   
for(i=0;i<n;i++){
    printf("%d",arr[i]); }
    return 0;
}
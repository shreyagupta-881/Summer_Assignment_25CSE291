#include<stdio.h>
int main(){
    int arr[]={1,2,3,5,4},n=5,i,j,sum=5;
    
    for(i=0;i<n;i++){
       for(j=i+1;j<n;j++){
        if(arr[i]+arr[j]==sum){
            printf("%d%d\n",arr[i],arr[j]);
        }
        
        
    }
}
    
    return 0;
}
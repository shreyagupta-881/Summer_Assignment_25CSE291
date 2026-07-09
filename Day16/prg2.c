#include<stdio.h>
int main(){
    int arr[]={1,2,3,3,4},n=5,i,j,count,max=0,element;
    for(i=0;i<n;i++){
       count=0;
    for(j=0;j<n;j++){
        if(arr[i]==arr[j])
        count++;}
    if(count>max){
        max=count;
        element=arr[i];
    }
}
    printf("element=%d\nfrequency=%d",element,max);
    return 0;
}